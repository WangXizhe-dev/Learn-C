#include<stdio.h>
int main(){
    char letter;
    printf("请输入一个英文字母");
    scanf("%c",&letter);
    if (letter >= 'a' && letter <= 'z'){
        printf("%c -> %c\n",letter,letter-32);
    }else if(letter >= 'A' && letter <= 'Z'){
        printf("%c -> %c\n",letter,letter+32);
    }else{
        printf("无效符号\n");
    }

    return 0;
}