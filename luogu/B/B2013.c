#include<stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    printf("%.5lf",((a-32)*5)/9);
    return 0;
}