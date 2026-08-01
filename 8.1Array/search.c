#include<stdio.h>
int num[]={0,1,3,5,7,9};
int len = sizeof(num)/sizeof(num[0]);
void input();
int search(int key,int num[],int len);

int main(){
    input();
    return 0;
}


void input(){
    int n = 0;
    printf("请输入一个数字，程序会查找数据库中是否存在");
    scanf("%d",&n);
    int loc = search(n,num,len);
    if (loc== -1){
        printf("数据库中不存在\n");
    }else{
        printf("存在，在第%d号位置\n",loc+1);
    }
}

int search(int key,int num[],int len){
    int i = 0;
    int loc = -1;
    for(;i < len;i++){
        if(key == num[i]){
            loc = i;
            break;
        }
    }
    return loc;
}
