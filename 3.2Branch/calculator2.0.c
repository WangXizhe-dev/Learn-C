#include<stdio.h>
int main()
{
    double a = 0, b = 0;
    char operator;
    printf("请输入要计算的两个数，空格隔开");
    scanf("%lf %lf",&a,&b);
    printf("请输入运算符号(+ - * /)");
    scanf(" %c",&operator);
    if (operator == '+'){
        printf("%lf\n",a + b);
    }else if (operator == '-'){
        printf("%lf\n",a - b);
    }else if (operator == '*'){
        printf("%lf\n",a*b);
    }else{
        if (b == 0){
            printf("无效运算\n");
        }else{
            printf("%lf\n",a/b);
        }
    }
    return 0;
}