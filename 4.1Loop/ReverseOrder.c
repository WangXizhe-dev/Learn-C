#include<stdio.h>
int main()
{
    int n = 0, i = 1, j = 0 ,p = 1,num = 0, nums = 0,numss = 0, ans = 0;
    printf("请输入一个正整数");
    scanf("%d",&num);
    nums = num;
    numss = num;
    do{
        n ++;
        num /= 10;
    }while(num > 0);
    do{
        j = n - 1;
        p = 1;
        while (j > 0){
            p *= 10;
            j --;
        }
        ans += nums / p * i;
        i *= 10;
        n --;
        nums %= p;
    }while(n > 0);
    printf("%d的逆序数为%d\n",numss,ans);
    return 0;
}