#include<stdio.h>
int main()
{
    int n = 0, i = 0,j = 0;
    printf("请输入金字塔的层数");
    scanf("%d",&n);
    for (i = 1;i <= n;i++){
        for (j = 1; j < n+1-i; j++){
            printf(" ");
        }
        for (j = 1;j < 2 * i;j++){
            printf("*");
        }
        for (j = 1; j < n+1-i; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}