#include<stdio.h>
int main(){
    char letter;
    int n;
    printf("请输入一个英文字母");
    scanf("%c",&letter);
    n = (int)letter;
    if (n >= 97 && n <= 122){
        printf("%c -> %c\n",letter,letter-32);
    }else if(n >= 65 && n <= 90){
        printf("%c -> %c\n",letter,letter+32);
    }else{
        printf("无效符号\n");
    }

    return 0;
}