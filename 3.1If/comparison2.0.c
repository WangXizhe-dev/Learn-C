#include<stdio.h>
int main()
{
    int a = 0,b = 0,c = 0,max = 0,min = 0;
    printf("请输入三个数字，空格隔开");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b){
        if (a >= c){
            max = a;
            if (c <= b){
                min = c;
            }
            else{
                min = b;
            }
        }
        else{
            max = c;
            min = b;
        }
    }
    else{
        if(b<=c){
            max = c;
            min = a;
        }
        else{
            max = b;
            if (a>=c){
                min = c;
            }
            else{
                min = a;
            }
        }
    }
    printf("最大值为%d,最小值为%d\n",max,min);
    return 0;
}