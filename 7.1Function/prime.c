#include<stdio.h>
int isPrime(int n){
    int isPrime = 1;
    int i = 2;
    for (;i < n;i++){
        if (n % i == 0){
            isPrime = 0;
        }
    }
    return isPrime;

}

int main(){
    int n = 0;
    printf("请输入一个正整数");
    scanf("%d",&n);
    if (isPrime(n)){
        printf("是质数\n");
    }else{
        printf("不是质数\n");
    }
    return 0;
}