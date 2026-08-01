#include<stdio.h>
void frequency();

int main(){
    frequency();
    return 0;
}

void frequency(){
    const int number = 10;
    int num[number];
    int i = 0;
    for (;i<number;i++){
        num[i] = 0;
    }
    printf("请输入0~9之间的整数,程序将统计每种数字出现次数,输入-1结束\n");
    int n = 0;
    scanf("%d",&n);
    while (n != -1)
    {
        if (n >= 0 && n <= number -1){
            num[n] += 1;
        }else{
            printf("请输入0~9之间的整数\n");
        }
        printf("请继续输入\n");
        scanf("%d",&n);
    }
    i = 0;
    for (;i<number;i++){
        printf("%d出现了%d次\n",i,num[i]);
    }
}