#include<stdio.h>
#include<string.h>
int main(void){
    printf("请输入一个字符串\n");
    char s[100];
    if (fgets(s, sizeof(s), stdin) == NULL) {
        return 1;
    }
    int c[26] = {0};
    int i = 0;
    int len = strlen(s);
    for(;i < len;i++){
        if((int)s[i] >= 'a' && (int)s[i] <= 'z'){
            c[(int)s[i] - 'a']++;
        }else if((int)s[i] >= 'A' && (int)s[i] <= 'Z'){
            c[(int)s[i] - 'A']++;
        }
    }
    for(i = 0;i<sizeof(c)/sizeof(c[0]);i++){
        if (c[i]){
            printf("%c/%c:%d\n",i + 'a','A' + i,c[i]);
        }
    }
    return 0;
}