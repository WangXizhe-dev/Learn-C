#include<stdio.h>
#include<math.h>
int main(){
    int n = 0;
    int num = 0,sum = 0;
    int n1 = 0,num1 = 0;
    printf("请输入水仙花数的位数");
    scanf("%d",&n);
    for (num = pow(10,n-1);num < pow(10,n);num ++){
        num1 = num;
        n1 = n;
        sum = 0;
        for (;n1 > 0;n1--){
            sum += pow(num1%10,n);
            num1 /= 10;
        }
        if (sum == num){
            printf("%d\n",num);
        } 
        
    }
    return 0;
}