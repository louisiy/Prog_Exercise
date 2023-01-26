#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

void open_url(char *url){
    char launch[255];
    sprintf(launch, "cmd /c start %s", url);
    system(launch);
    sprintf(launch, "x-www-browser '%s' &", url);
    system(launch);
    sprintf(launch, "open '%s'", url);
    system(launch);
}

void error(char *msg){
    fprintf(stderr,"%s: %s\n",msg,strerror);
    exit(1);
}

int main(int argc, char *argv[]){
    char *phrase = argv[1];
    char *vars[] = {"RSS_FEED=http://www.cnn.com/rss/celebs.xml", NULL};
    int fd[2];
    if (pipe(fd) == -1) {
	    error("Can't create the pipe");
    }

    pid_t pid = fork();
    if (pid == -1) {
        error("Can't fork process");
    }
    
    if (!pid) {
        close(fd[0]);
        dup2(fd[1],1);
        if (execle("/usr/bin/python", "/usr/bin/python", "./rssgossip.py","-u", phrase, NULL, vars) == -1) {
            error("Can't run script");
        }
    }

    close(fd[1]);
    dup2(fd[0],0);
    char line[255];
    while (fgets(line, 255,0)) {
        if (line[0] == '\t')
        open_url(line + 1);
    }
    return 0;
}