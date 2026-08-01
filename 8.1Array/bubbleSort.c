#include<stdio.h>

void bubble();

int main(){
    bubble();
    return 0;
}

void bubble(){
    int num[]={3,8,1,5,2,0,7,12,9,6,5};
    int i = 0;
    int len = sizeof(num)/sizeof(num[0]);
    int finish = 0;
    while (finish == 0){
        finish = 1;
        for (i = 0;i < len -1;i++){
            if (num[i] > num[i+1]) {
                int x = num [i];
                num [i] = num [i + 1];
                num [i + 1] = x;
                finish = 0;
        }
    }
    }
    for(i = 0;i < len;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}