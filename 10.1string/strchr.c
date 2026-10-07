#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    //找到某个字母开头的单词
    char s1[] = "hello world";
    char* p1 = strchr(s1,'w');
    if(p1){
        printf("%s\n",p1);
    }

    //找到第二个出现的目标字母并拷贝后续字符
    char s2[] = "hello";
    char* p2 = strchr(s2,'l');
    char* p3 = strchr(p2+1,'l');
    char* t = (char*)malloc(strlen(p3)+1);
    strcpy(t,p3);
    printf("%s\n",t);
    free(t);
    //拷贝目标字母前面一段
    
    return 0;
}