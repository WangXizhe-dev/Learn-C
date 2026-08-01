#include<stdio.h>

void reverse();

int main(){
    reverse();
    return 0;
}

void reverse(){
    int n = 0,i = 1,cnt = 0;
    int num[100];
    printf("请输入数字,输入-1结束\n");
    scanf("%d",&n);
    while (n != -1 && cnt < 100)
    {
        num[cnt] = n;
        cnt ++;
        printf("请继续输入\n");
        scanf("%d",&n);
    }
    for(;i <= cnt;i++){
        printf("%d ",num[cnt - i]);
    }
    printf("\n");
    
}