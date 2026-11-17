#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int main(){
    struct date today;
    scanf("%d %d %d",&today.year,&today.month,&today.day);
    printf("今天是%d-%d-%d\n",today.year,today.month,today.day);
    return 0;
}