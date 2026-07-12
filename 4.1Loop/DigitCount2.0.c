#include<stdio.h>
int main()
{
    int n = 0, num = 0,nums = 0;
    printf("请输入一个正整数");
    scanf("%d",&num);
    nums = num;
    do{
        n ++;
        num /= 10;
    }while (num > 0);
    printf("%d是%d位数\n",nums,n);
    
    return 0;
}