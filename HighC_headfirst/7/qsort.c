#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int scores[] = {543,323,32,553,11,3,112};

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
    rectangle* ra=(rectangle*)a;
    rectangle* rb=(rectangle*)b;
    int area_a =(ra->width * ra->height);
    int area_b =(rb->width * rb->height);
    return area_b - area_a;
}

//按字母顺序排列名字，区分大小写

int main(){
    qsort(scores,7,sizeof(int),compare_scores);
    for(int i =0;i<7;i++){
        printf("%d ",scores[i]);
    }
    return 0;
}