//双指针 read & write 
#include<stdio.h>
#include<string.h>
int main(void){
    char s[100];
    printf("请输入一个句子");
    if(fgets(s,sizeof(s),stdin) == NULL){
        return 1;
    }
    int read = 0,write = 0;
    while(s[read] != '\0'){
        if(s[read] == ' '&& s[write-1] == ' '){
            read ++;
        }else{
            s[write] = s[read];
            write ++;
            read ++;
        }
    }
    s[write] = '\0';
    printf("%s\n",s);
    return 0;
}