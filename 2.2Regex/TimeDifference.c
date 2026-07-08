#include<stdio.h>
int main()
{
    int hour1 = 0, minute1 = 0;
    int hour2 = 0, minute2 = 0;
    printf("请输入第一个时间(XX小时XX分钟,用空格隔开)");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入第二个时间(XX小时XX分钟,用空格隔开)");
    scanf("%d %d",&hour2,&minute2);
    int t1 = hour1*60 + minute1;
    int t2 = hour2*60 + minute2;
    int t = t2 - t1;
    printf("时间差为%d小时%d分钟\n",t/60,t%60);


    return 0;
}