#include<stdio.h>
int main()
{
    int n = 0, a = 1;
    printf("请输入一个正整数");
    scanf("%d",&n);
    while (n / a > 9){
        a *= 10;  
    }
    for (;a > 0;a /= 10){
        printf("%d ",n / a);
        n -= a*(n/a);
    }
    printf("\n");
    
    return 0;
}