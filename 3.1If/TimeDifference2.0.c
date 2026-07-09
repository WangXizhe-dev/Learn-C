#include<stdio.h>
int main()
{
    int hour1 = 0, minute1 = 0;
    int hour2 = 0, minute2 = 0;
    printf("请输入早些的时间(XX小时XX分钟,用空格隔开)");
    scanf("%d %d",&hour1,&minute1);
    printf("请输入晚些的时间(XX小时XX分钟,用空格隔开)");
    scanf("%d %d",&hour2,&minute2);
    int hour = hour2 - hour1; 
    int minute = minute2 - minute1;
    if (minute < 0){
        minute += 60;
        hour --;
    }
    printf("时间差为%d小时%d分钟\n",hour,minute);

    return 0;
}