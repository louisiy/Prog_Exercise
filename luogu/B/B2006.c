#include<stdio.h>
int main(){
    double x,a,y,b;
    scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
    double z;
    z = (a*x-b*y)/(a-b);
    printf("%.2f",z);
    return 0;
}