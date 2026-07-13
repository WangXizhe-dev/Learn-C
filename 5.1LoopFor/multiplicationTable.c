#include<stdio.h>
int main()
{
    int i = 0,j = 0;
    for(i = 1;i < 10; i++){
        for (j = 1; j < 10; j++){
            printf("%d * %d = %d  ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}