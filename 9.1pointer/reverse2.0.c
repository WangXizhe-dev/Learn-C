#include<stdio.h>

void reverse(int *arr,int n);

int main(){
    int arr[] = {1,3,4,5,8,10,13};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,len);
    for (int i = 0 ;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void reverse(int *arr,int n){
    int *left = arr;
    int *right = arr + n - 1;
    while(left < right){
        int t = *left;
        *left = *right;
        *right = t;
        left ++;
        right --;
    }
}