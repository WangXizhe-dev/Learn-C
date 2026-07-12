#include<stdio.h>
int main(){
    int n = 0,i = 1;
    printf("请输入一个数，程序会判断其是否是质数");
    scanf("%d",&n);
    while (i < n-1){
        i ++;
        if (n % i == 0){
            printf("不是质数\n");
            break;
        }
    }
    if (n % i != 0 || n == 1 || n == 2){
        printf("是质数\n");
    }
    return 0;
}