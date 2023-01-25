#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

void error(char *msg){
    fprintf(stderr,"%s: %s\n",msg,strerror);
    exit(1);
}

int main(int argc, char* argv[]){
    char *feeds[] = {
        "http://www.cnn.com/rss/celebs.xml",
        "http://www.rollingstone.com/rock.xml",
        "http://eonline.com/gossip.xml"
    };
    int times = 3;
    char *phrase = argv[1];
    int i;
    for(i = 0; i< times; i++){
        char var[255];
        sprintf(var,"RSS_FEED=%s",feeds[i]);
        char *vars[] = {var, NULL};
        pid_t pid = fork();
        if (pid == -1) {
            error("无法克隆进程");
        }
        if (!pid) {
            if(execlp("/usr/bin/python", "/usr/bin/python","./rssgossip.py",phrase,NULL,vars)){
                error("无法运行脚本");
            }
        }
    }

    return 0;
}