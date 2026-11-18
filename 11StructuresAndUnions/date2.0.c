#include<stdio.h>
struct date{
    int year;
    int month;
    int day;
};
int main(){
    struct date today={2026,11,18};
    struct date* p = &today;
    (*p).day=19;
    p->year = 2027;
    printf("今天是%04d-%02d-%02d\n",today.year,today.month,today.day);
    return 0;
}