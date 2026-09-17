#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 0;
    printf("你要输入几个数字?\n");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("请输入数字\n");
    int i = 0;
    for(;i < n;i++){
        int x = 0;
        scanf("%d",&x);
        *(arr + i) = x;
    }
    //求和
    int sum = 0;
    for (i = 0;i < n;i++){
        sum += *(arr + i);
    }
    printf("这%d个数的和为%d\n",n,sum);
    //最大值
    int max = 0;
    for(i = 0;i < n;i++){
        if (*(arr + i) > max){
            max = *(arr + i);
        }
    }
    printf("这%d个数的最大值为%d\n",n,max);
    //最小值
    int min = *arr;
    for(i = 0;i < n;i++){
        if (*(arr + i) < min){
            min = *(arr + i);
        }
    }
    printf("这%d个数的最小值为%d\n",n,min);
    //平均值
    printf("这%d个数的平均值为%f\n",n,(double)sum/n);
    free(arr);
    return 0;
}