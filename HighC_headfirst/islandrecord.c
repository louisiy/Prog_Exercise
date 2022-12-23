#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义新结构
typedef struct island{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

//创建新的岛屿
island* create(char *name){
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

//显示链表里的值
void display(island *start){
    island *i = start;
    for(;i != NULL; i = i->next ){
        printf("Name:%s\n open:%s-%s\n", i->name , i->opens , i->closes );
    }
}

//TODO 这写出了一个文件输入再输出的bug，txt文件中换行符被输出了

//释放申请的空间
void release(island *start){
    island *i = start;
    island *next = NULL;
    for(; i != NULL; i = next){
        next = i->next;
        free(i->name);
        free(i);
    }
}

int main(){
    //初始化
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;

    //键入信息（标准输入）
    char name[80];
    for(;fgets(name,80,stdin)!= NULL;i = next){
        next = create(name);
        if(start == NULL)
            start = i;
        if(i != NULL){
            i->next = next;
        }
    }

    //显示值
    display(start);


    //释放空间
    release(start);

    getchar();
    return 0;
}