#include <stdio.h>


int main() {
    int month;
    printf("请输入月份\n");
    scanf("%d",&month);
    char emonth[][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s",emonth[month-1]);
    return 0;
}