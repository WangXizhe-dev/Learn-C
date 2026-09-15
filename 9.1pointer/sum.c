#include<stdio.h>
void input(int *p);
int sum(int *p,int n);

int main(){
    int arr[3];
    input(arr);
    printf("%d\n",sum(arr,sizeof(arr)/sizeof(arr[0])));
    return 0;
}

void input(int *p){
    int ans = 0;
    int i = 0;
    while(ans != -1){
        printf("请输入数字，程序将求和，输入-1结束");
        scanf("%d",&ans);
        *(p + i) = ans;
        i++;
    }
    
}

int sum(int *p,int n){
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += *(p + i);
    }
    return sum;
}
