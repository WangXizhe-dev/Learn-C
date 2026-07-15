#include<stdio.h>
int main(){
    int a = 0,b = 0,div = 0;
    printf("请输入两个正整数，空格隔开，程序将计算最大公约数");
    scanf("%d %d",&a,&b);
    if (a > b){
        div = b;
        while (a % div != 0 || b % div != 0){
            div -= 1;
        }
    }else if(a < b){
        div = a;
        while (a % div != 0 || b % div != 0){
            div -= 1;
        }
    }else{
        div = a;
    }
    printf("最大公约数为%d\n",div);
    return 0 ;
}