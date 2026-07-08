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
    printf("%d天%d小时%d分钟%d秒\n",time/86400,time%86400/3600,time%86400%3600/60,time%60);
    return 0;
} 