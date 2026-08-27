#include<stdio.h>
int main(){
    int arr[] = {1,3,4,5,6,7,10};
    const int target = 3;
    int len = sizeof(arr) / sizeof(arr[0]);
    int left = 0,right = len - 1;
    int ret = -1;
    int mid;
    while (left <= right){
        mid = (left+right)/2;
        if (arr[mid] == target){
            ret = mid;
            break;
        }else if(arr[mid] > target){
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    printf("目标元素的索引：%d\n",ret);
    
    return 0;
}