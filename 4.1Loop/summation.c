#include<stdio.h>
int main()
{
    int n = 0,sum = 0;
    while (n < 100){
        n ++;
        sum += n;
    }
    printf("%d\n",sum);
    return 0;
}