#include<stdio.h>
#include<stdlib.h>

int input(int **p);
int sum(int *p,int n);

int main(){
    int *arr = NULL;
    int len = input(&arr);
    if (len < 0){
        printf("内存分配失败");
        return 1;
    }
    printf("所有数之和为%d\n",sum(arr,len));
    free (arr);
    return 0;
}

int input(int **p){
    int cap = 4;
    int *a = (int *)malloc(cap * sizeof(int));
    if (a == NULL){
        return -1;
    }
    int x;
    int i = 0;
    printf("请输入数字，程序将求和，-1结束\n");
    while(scanf("%d",&x)==1 && x != -1){
        if (i == cap){
            cap *= 2;
            int *tmp = (int *)realloc(a,cap * sizeof(int)) ;
            if (tmp == NULL){
                free (a);
                return -1;
            }
            a = tmp;
        }
        *(a + i) = x;
        i++;
    }
    *p = a;
    return i;

}

int sum(int *p,int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += *(p + i);
    }
    return sum;
}