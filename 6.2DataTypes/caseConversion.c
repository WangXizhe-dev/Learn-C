#include<stdio.h>
int main(){
    char letter;
    int n;
    printf("请输入一个英文字母");
    scanf("%c",&letter);
    n = (int)letter;
    if (n >= 97 && n <= 122){
        printf("%c -> %c\n",letter,letter-32);
    }else{
        printf("%c -> %c\n",letter,letter+32);
    }

    return 0;
}