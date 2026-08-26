#include<stdio.h>
int main(){
    int array[] = {1,3,4,5,6,7,10};
    const int target = 7;
    int len = sizeof(array) / sizeof(array[0]);
    int i = len / 2 ;
    while (array[i] != target){
        if (array[i] > target){
            i = (i + 1)/2 ;
        }else{
            i = i + (len - i - 1) ;
        }
    }
    printf("%d在第%d号\n",target,i+1);
    return 0;
}