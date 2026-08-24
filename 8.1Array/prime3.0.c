#include<stdio.h>

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes);

int main(){
    const int number = 100;
    int prime[number]={2};
    int cnt = 1;
    int i = 3;
    for(;cnt<number;i++){
        if (isPrime(i,prime,cnt)){
            prime[cnt++] = i;
        }
    }
    for(i = 0;i < number;i++){
        printf("%d ",prime[i]);
    }
    printf("\n");
    return 0;
}

int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
    int ret = 1;
    int i = 0;
    for (;i < numberOfKnownPrimes;i++){
        if (x % knownPrimes[i] == 0){
            ret = 0;
            break;
        }
    }
    return ret;

}