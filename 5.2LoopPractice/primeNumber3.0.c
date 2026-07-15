#include<stdio.h>
int main(){
    int n = 0, i = 2, isPrime = 1;
    printf("请输入一个数，程序将判断其是否是质数");
    scanf("%d",&n);
    for (; i < n ; i++){
        if (n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1 && n != 1){
        printf("是质数\n");
    }else{
        printf("不是质数\n");
    }

    return 0;
}