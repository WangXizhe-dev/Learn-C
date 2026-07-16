/*要求：给定A，枚举从A开始的4个数字组成的无重复3位数
从小到大排列，每行6个数，数用空格隔开
思路：不是数学上的枚举法（无规律）
而是三个位数递增，找到范围内无重复的数！*/
#include<stdio.h>
int main(){
    int a = 0,i = 0, j = 0, k = 0;
    int cnt = 0;
    printf("请输入一个不超过6的正整数");
    scanf("%d",&a);
    for (i = a;i < a + 4;i++){
        for (j = a ;j < a + 4; j++){
            for (k = a; k < a + 4; k++){
                if (i != j && i != k && j != k){
                    printf("%d%d%d",i,j,k);
                    cnt ++;
                    if (cnt < 6){
                        printf(" ");
                    }
                    else{
                        printf("\n");
                        cnt = 0;
                    }
                }
            }
        }
    }
    return 0;
}