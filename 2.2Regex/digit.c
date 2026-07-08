#include<stdio.h>
int main()
{
    int num = 0;
    printf("请输入一个三位数");
    scanf("%d",&num);
    printf("%d的个位为%d,十位为%d,百位为%d\n",num,num%10,num/10%10,num/100);
    int time = 0;
    printf("请输入秒数");
    scanf("%d",&time);
    printf("%d:%d:%d\n",time/3600,time%3600/60,time%3600%60);
    return 0;
} 