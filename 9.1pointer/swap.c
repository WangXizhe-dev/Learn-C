#include<stdio.h>
void swap(int *p1,int *p2);

int main(){
    int a = 1;
    int b = 2;
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}

void swap(int *p1,int *p2){
    int t = *p1;
    *p1 = *p2;
    *p2 = t;
}