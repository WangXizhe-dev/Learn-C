#include<stdio.h>
int main()
{
    int n = 0 ,ans = 0;
    printf("请输入一个整数");
    scanf("%d",&n);
    while (n != 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n",ans);
    return 0;
}