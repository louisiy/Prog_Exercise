#include<stdio.h>
int main(){
    int x,a,y,b;
    scanf("%d%d%d%d",&x,&a,&y,&b);
    double z;
    z = (a*x-b*y)/(a-b);
    printf("%.2f",z);
    return 0;
}