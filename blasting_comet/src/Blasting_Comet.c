#include <stdio.h>

int main(){
    //现在搭个框架，命令行版本

    int _mode;

    printf("Blasting Comet\n");
    printf("Let's blast the comets!\n");
    printf("Please enter your parament to configure your game.\n");

    printf("mode:_\b");

    scanf("%d", &_mode);
    if ( _mode == 0){
        printf("Here is the standard mode. Glad to see you here. Let's start 3s later.");
    }

    system("pause");
    return 0;
}
