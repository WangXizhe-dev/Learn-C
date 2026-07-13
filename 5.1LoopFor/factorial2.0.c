#include<stdio.h>
int main()
{
    int n = 0,ans = 1,i = 1;
    printf("请输入一个正整数，系统将会计算阶乘");
    scanf("%d",&n);
    for (i = n ;i >1 ; i--){
        ans *= i;
    }
    printf("%d的阶乘为%d\n",n,ans);
    return 0;
}