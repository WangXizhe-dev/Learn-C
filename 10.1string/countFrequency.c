#include<stdio.h>
#include<string.h>
int main(void){
    printf("请输入一个字符串\n");
    char s[100];
    if(scanf("%99s",s) != 1){
        printf("输入失败");
        return 1;
    }
    int c[52];
    int i = 0;
    for(;i<sizeof(c)/sizeof(c[0]);i++){
        c[i] = 0;
    }
    for(i = 0;i < strlen(s);i++){
        if((int)s[i] >= 'a'){
            c[(int)s[i] - 'a']++;
        }else{
            c[(int)s[i] - 'A']++;
        }
    }
    for(i = 0;i<sizeof(c)/sizeof(c[0]);i++){
        if (c[i]){
            printf("%c:%d\n",(char)(i + 'a'),c[i]);
        }
    }
    return 0;
}