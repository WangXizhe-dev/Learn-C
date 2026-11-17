#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int main(){
    struct date today;
    scanf("%d %d %d",&today.year,&today.month,&today.day);
    printf("今天是%04d-%02d-%02d\n",today.year,today.month,today.day);
    return 0;
}