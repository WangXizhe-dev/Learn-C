#include<stdio.h>

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n = 0;
    printf("请输入一个正整数");
    scanf("%d",&n);
    printf("%d!=%d\n",n,factorial(n));
    return 0;
}