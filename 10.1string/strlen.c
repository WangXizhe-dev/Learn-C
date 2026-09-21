#include <stdio.h>

int mystrlen(const char* str);

int main() {
    char str[]="hello";
    printf("%d\n",mystrlen(str));
    return 0;
}

int mystrlen(const char* str){
    int cnt = 0;
    while(str[cnt] != '\0'){
        cnt ++;
    }
    return cnt;
}