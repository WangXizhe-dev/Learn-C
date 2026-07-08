#include<stdio.h>
int main()
{
    int foot = 0;
    int inch = 0;
    printf("请输入你的身高(如五尺七寸用5,7表示)");
    scanf("%d,%d",&foot,&inch);
    printf("你的身高为%f米\n",(foot+inch/12.0)*0.3048);

    return 0;
}