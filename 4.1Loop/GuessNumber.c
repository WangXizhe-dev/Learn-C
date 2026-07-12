#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand((unsigned int)time(NULL));
    int ans = rand() % 101;
    int gus = 0,n = 0;
    do{
        printf("请猜数字(答案在1~100)\n");
        scanf(" %d",&gus);
        n ++;
        if (gus < ans){
            printf("猜小了\n");
        }else if (gus > ans){
            printf("猜大了\n");
        }
    }while (ans != gus);
    printf("猜对了！你猜了%d次\n",n);
    
    return 0;
}