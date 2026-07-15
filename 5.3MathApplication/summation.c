#include<stdio.h>
#include<math.h>
int main(){
    int n = 0, i = 1;
    double sum = 0;
    printf("输入n的值");
    scanf("%d",&n);
    for (;i <= n;i++){
        sum += 1.0 / pow(2,i);
    }
    printf("%lf\n",sum);
    return 0;
}