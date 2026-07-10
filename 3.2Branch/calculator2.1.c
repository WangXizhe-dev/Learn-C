#include<stdio.h>
int main()
{
    double a = 0, b = 0;
    char operator;
    printf("请输入要计算的两个数，空格隔开");
    scanf("%lf %lf",&a,&b);
    printf("请输入运算符号(+ - * /)");
    scanf(" %c",&operator);
    switch (operator){
        case '+' :
            printf("%.2lf",a+b);
            break;
        case '-':
            printf("%.2lf\n",a - b);
            break;
        case '*':
            printf("%.2lf\n",a*b);
            break;
        case '/':
            if (b == 0){
                printf("无效运算\n");
            }else{
                printf("%.2lf\n",a/b);}
            break;
        default:
            printf("请输入正确的符号\n");
    }
    return 0;
}