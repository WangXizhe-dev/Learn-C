#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    //找到某个字母开头的单词
    char s[] = "hello world";
    char* p = strchr(s,'w');
    if(p){
        printf("%s\n",p);
    }
    //找到第二个出现的目标字母并输出后续字符
    
    return 0;
}