#include<stdio.h>
int main()
{
    int a = 0,b = 0,max = 0;
    printf("请输入两个数字，空格隔开");
    scanf("%d %d",&a,&b);
    if (a >= b){
        max = a;
    }
    else{
        max = b;
    }
    printf("较大的数为%d\n",max);
    return 0;
}