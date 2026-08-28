#include<stdio.h>
void minmax(int *p1,int *p2,int len,int arr[]);

int main(){
    int arr[]={3,2,1,6,3,8,2,6,9,7};
    int len = sizeof(arr)/sizeof(arr[0]);
    int min,max;
    minmax(&min,&max,len,arr);
    printf("min=%d,max=%d\n",min,max);

    return 0;
}

void minmax(int *p1,int *p2,int len,int arr[]){
    int i;
    *p1 = *p2 = arr[0];
    for(i = 0;i<len;i++){
        if(arr[i] < *p1){
            *p1 = arr[i];
        }
        if(arr[i] > *p2){
            *p2 = arr[i];
        }
    }

}