#include<stdio.h>
#include<string.h>
int main(void){
    char s[100];
    printf("请输入一段字符串\n");
    scanf("%99s",s);
    int ret = 1;
    for(int i = 0,j = strlen(s)-1;i < j;i++,j--){
        if (s[i] != s[j]){
            ret = 0;
            break;
        }
    }
    if(ret){
        printf("回文\n");
    }else{
        printf("不回文\n");
    }
    return 0;
}