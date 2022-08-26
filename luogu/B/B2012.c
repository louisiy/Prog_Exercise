#include <stdio.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%.3lf%%",(b*100/a));
    return 0;
}