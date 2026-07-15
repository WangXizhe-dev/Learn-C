#include<stdio.h>
int main(){
    int a = 0,b = 0,c = 0,div = 0;
    printf("请输入两个正整数，空格隔开，程序将计算最大公约数");
    scanf("%d %d",&a,&b);
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    div = a;
    printf("最大公约数为%d\n",div);
    return 0 ;
}