//本程序为headfirst的练习程序
//计算牌面点数的程序
#include <stdio.h>
#include <stdlib.h>

int main (void){
    char card_name[3];
    int count = 0;

    do{
        printf("输入牌名\n");
        scanf("%2s",card_name);
        int val = 0;
        //原if分支以下用switch改写
        switch (card_name[0]){
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;//退出循环，检查循环条件
            default:
                val = atoi(card_name);
                if (val<1|| val>10 )
                {
                    printf("我无法理解这个值！\n");
                    continue;
                }
                break;
        }


        if (val >= 3 && val <= 6){
            count++;
        }else if( val == 10){
            count--;
        }
    } while (card_name[0] != 'X');

    system("pause");
    return 0;
}
