#include<stdio.h>
int main()
{
    int n = 0, one, two, five;
    printf("请输入金额（元）");
    scanf("%d",&n);
    for (one = 0; one <= n * 10; one ++){
        for (two = 0; two <= n * 5; two ++){
            for (five = 0; five <= n * 2; five ++){
                if (one + two * 2 + five * 5 == n * 10){
                    printf("可以由%d个一角,%d个两角,%d个五角凑出%d元\n",one,two,five,n);
                    goto out;
                }
            }
        }
    }
    out:
    return 0;
}