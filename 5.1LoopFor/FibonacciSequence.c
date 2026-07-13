#include<stdio.h>
int main()
{
    int a = 1,b = 1, c = 0, i = 0;
    printf("1, 1, ");
    for (i = 0;i< 20;i++){
        c = a + b;
        printf("%d, ",c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}