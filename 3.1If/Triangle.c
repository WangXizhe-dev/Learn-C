#include <stdio.h>
int main()
{
    int a = 0,b = 0, c = 0;
    printf("请输入三个边长,空格隔开");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a){
        if (a == b && b == c){
            printf("这是一个等边三角形\n");
        }
        else{
            if (a == b || b == c){
            printf("这是一个等腰三角形\n");
        }
            else{
            printf("这是一个普通三角形\n");
        }
        }
    }
    else{
        printf("这不能构成三角形\n");
    }
    return 0;
}