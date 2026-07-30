#include<stdio.h>

void printTriangle(int n){
    int i = 1;
    for (;i <= n;i++){
        int j = 0;
        for(;j<(n-i);j++){
            printf(" ");
        }
        for(j = 0;j<(2*i-1);j++){
            printf("*");
        }
        for(j = 0;j<(n-i);j++){
            printf(" ");
        }
        printf("\n");
    }
}

int main(){
    int n = 0;
    printf("打印高度为几的等腰三角形？");
    scanf("%d",&n);
    printTriangle(n);
    return 0;
}