#include<stdio.h>
int main()
{
    int n = 0,sum = 0;
    do{
        printf("请输入数字，程序将自动求和(输入0退出)");
        scanf("%d",&n);
        sum += n;
    }while (n != 0);
    printf("和为%d\n",sum);
    return 0;
}