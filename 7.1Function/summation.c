#include<stdio.h>
void sum(int begin,int end);
int main(){
    sum(1,100);
    return 0;
}
void sum(int begin,int end){
    int sum = 0;
    int i = begin;
    for(;i <= end;i++){
        sum += i;
    }
    printf("%d到%d累加之和为%d\n",begin,end,sum);
}