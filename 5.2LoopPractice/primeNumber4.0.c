#include<stdio.h>
int main()
{
    int i , n = 2, isPrime ,cnt = 0, goal = 0;
    printf("你要输出前多少个质数？");
    scanf("%d",&goal);
    while (cnt < goal){
        isPrime = 1;
        for (i = 2; i < n; i ++){
            if (n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1){
            printf("%d ",n);
            cnt ++;
        }
        n ++;
    }
    printf("\n");
    return 0;
}