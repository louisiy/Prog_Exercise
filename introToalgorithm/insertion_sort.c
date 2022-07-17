#include <stdio.h>

int main() {
    int length;
    scanf("%d",&length);
    int a[length];

    for (int b = 1;b <= length;b++){
        scanf("%d",&a[b-1]);
    }

    //insertion_sort algorithm
    int temp;
    int i, j;
    for (j = 2; j <= length; j++){
        temp = a[j];
        i = j - 1;
        while (i > 0 && a[i]>temp){
            a[i+1] = a[i];
            i--;
        }
        a[i + 1] = temp;
    }


    for (int b = 1;b <= length;b++){
            printf("%d ",a[b-1]);
    }

    getchar();
    return 0;
}
