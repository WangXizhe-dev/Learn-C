#include<stdio.h>
int max(int a,int b){
    int max = 0;
    if (a > b){
        max = a;
    }else{
        max = b;
    }
    return max;
}
int main(){
    printf("%d\n",max(2,1));
    return 0;
}