#include<stdio.h>
int main(){
    int price = 0;
    int bill = 0;
    printf("请输入产品金额");
    scanf("%d",&price);
    printf("请输入支付票面");
    scanf("%d",&bill);
    if (price <= bill){
        printf("找您%d元\n",bill-price);
    }
    else{
        printf("您的钱不够\n");
    }
    return 0;
}