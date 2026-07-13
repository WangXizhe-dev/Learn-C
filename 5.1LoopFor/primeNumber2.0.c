#include<stdio.h>
int main()
{
    int i = 0, n = 0, p = 1;
    for (n = 2; n <= 100; n ++){
        p = 1;
        for (i = 2; i < n; i ++){
            if (n % i == 0){
                p = 0;
            }
        }
        if (p == 1){
            printf("%d, ",n);
        }
    }
    printf("\n");
    return 0;
}