#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char *my_env[] = {"JUICE=peach and apple", NULL};
    execle("dinneriinfo", "dinneriinfo", "4", NULL, my_env);
    return 0;
}
