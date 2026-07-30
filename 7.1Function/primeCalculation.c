#include<stdio.h>
int isPrime(int num);
void printPrimes(int m,int n);

int main(){
    int m = 0,n = 0;
    printf("请输入一个区间,空格隔开");
    scanf("%d %d",&m,&n);
    printPrimes(m,n);
    return 0;
}

int isPrime(int num){
    int isPrime = 1;
    int i = 2;
    if (num == 1){
        return 0;
    }
    for(;i * i <= num;i++){
        if (num % i == 0){
            isPrime = 0;
        }
    }
    return isPrime;
}

void printPrimes(int m,int n){
    printf("区间[%d,%d]的质数有:\n",m,n);
    int i = m;
    int cnt = 0;
    int sum = 0;
    for (;i <= n;i++){
        if (isPrime(i)){
            printf("%d ",i);
            cnt ++;
            sum += i;
        }
    }
    printf("\n");
    printf("个数：%d,总和：%d,平均值:%d\n",cnt,sum,sum/cnt);
}