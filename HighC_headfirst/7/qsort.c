#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//升序
int compare_scores(const void* score_a, const void* score_b){
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a-b;
}

//降序
int compare_scores_desc(const void* score_a, const void* score_b){
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return b-a;
}

//按面积大小
typedef struct{
    int width;
    int height;
}rectangle;

int compare_areas(const void* a, const void* b){
    rectangle* ra=(rectangle*)a;
    rectangle* rb=(rectangle*)b;
    int area_a =(ra->width * ra->height);
    int area_b =(rb->width * rb->height);
    return area_a - area_b;
}

int compare_areas_desc(const void* a, const void* b){
    return compare_areas(b,a);
}

//按字母顺序排列名字，区分大小写
int compare_names(const void* a, const void* b){
    char** sa = (char**)a;
    char** sb = (char**)b;
    return strcmp(*sa,*sb);
}

int compare_names_desc(const void* a, const void* b){
    return -compare_names(a,b);
}


int main(){
    int i;

    int scores[] = {543,323,32,553,11,3,112};
    qsort(scores,7,sizeof(int),compare_scores_desc);
    puts("These are the scores in order:");
    for(i =0; i<7; i++){
        printf("%d ",scores[i]);
    }

    puts("\n");

    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    qsort(names,4,sizeof(char*),compare_names);
    puts("These are the names in order:");
    for(i = 0; i < 4; i++ ){
        printf("%s ",names[i]);
    }

    return 0;
}