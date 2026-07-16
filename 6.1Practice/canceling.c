#include<stdio.h>
int main(){
    int a = 0,b = 0,t = 0;
    printf("请输入一个分数(用XX/XX表示)");
    scanf("%d/%d",&a,&b);
    if (a > b){
        t = b;
    }else{
        t = a;
    }
    while (a % t != 0 || b % t != 0){
        t --;
    }
    printf("%d/%d\n",a/t,b/t);
    
        
    return 0;
}