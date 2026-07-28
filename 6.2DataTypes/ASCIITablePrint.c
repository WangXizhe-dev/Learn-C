#include<stdio.h>
int main(){
    int i = 32;
    for (;i < 127;i++){
        printf("%d %c\n",i,i);
    }
    return 0;
}