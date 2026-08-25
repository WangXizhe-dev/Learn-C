#include<stdio.h>

const int number = 100;
int main(){
    int prime[number+1];
    int i = 2;
    for(;i < number;i++){
        prime[i] = 1;
    }
    int j;
    for(i = 2;i*i <number;i++){
        if (prime[i] == 1){
            for(j = 2;j*i <= number;j++){
                prime[j*i] = 0;
            }
        }
    }
    for (i = 2;i < number;i++){
        if (prime[i] == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}