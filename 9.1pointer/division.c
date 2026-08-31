#include<stdio.h>
int division(int a,int b,double *p);
int main(){
    int a,b;
    double ans;
    printf("请输入被除数和除数,用空格隔开");
    scanf("%d %d",&a,&b);
    if(division(a,b,&ans)){
        printf("%d/%d=%f\n",a,b,ans);
    }else{
        printf("除数不能为0\n");
    }
    return 0;
}
int division(int a,int b,double *p){
    if (b == 0){
        return 0;
    }else{
        *p = (double)a / b;
        return 1;
    }
}