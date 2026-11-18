#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int main(){
    struct date today={2026,11,18};
    struct date tommorow;
    tommorow = today;
    struct date* p = &tommorow;
    (*p).day=19;
    p->year = 2027;
    printf("今天是%04d-%02d-%02d\n",today.year,today.month,today.day);
    printf("明天是%04d-%02d-%02d\n",tommorow.year,tommorow.month,tommorow.day);
    return 0;
    return 0;
}