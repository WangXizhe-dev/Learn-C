#include<stdio.h>

int main()
{
    double a = 0 , b = 0;
    printf("请输入两个数字，中间用空格隔开，您将会得到两者之和/差/积/商");
    scanf("%lf %lf",&a,&b);
    printf("%lf+%lf=%lf\n",a,b,a+b);
    printf("%lf-%lf=%lf\n",a,b,a-b);
    printf("%lf*%lf=%lf\n",a,b,a*b);
    printf("%lf/%lf=%lf\n",a,b,a/b);
    return 0;
}