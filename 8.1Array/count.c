#include<stdio.h>
void count();
int main(){
    count();
    return 0;
}

void count(){
    int cnt = 0,sum = 0;
    int n = 0;
    int num[100];
    printf("请输入整数(不要超过100个!),输入-1停止");
    scanf("%d",&n);
    while (n != -1 && cnt < 100){
        num[cnt] = n;
        sum += n;
        cnt ++;
        printf("请输入整数");
        scanf("%d",&n);
    }
    if (cnt == 0){
        printf("平均数:0");
    }else{
        double average = (double)sum/cnt;
        printf("平均数:%lf\n",average);
        printf("大于平均数的数有:\n");
        int i = 0;
        for (;i < cnt;i++){
            if (num[i] > average){
                printf("%d ",num[i]);
            }
        }
        printf("\n");
    }


}