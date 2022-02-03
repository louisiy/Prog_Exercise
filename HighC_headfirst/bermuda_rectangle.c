//这个是headfirst的练习程序
//此为一个航海游戏

#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int *lon);

int main (void){
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude,&longitude);
    printf("停！当前位置：[%i,%i]\n",latitude,longitude);

    system("pause");
    return 0;
}

void go_south_east(int *lat, int *lon){
    *lat = *lat - 1;
    *lon = *lon + 1;
}
