#include<stdio.h>
#include<string.h>

char* mycpy(char* dst,const char* src);

int main(void){
    char s1[] = "abc";
    char s2[] = "abc";
    mycpy(s1,s2);
    return 0;
}

char* mycpy(char* dst,const char* src){
    // int i = 0;
    // while(src[i] != '\0'){
    //     dst[i] = src[i];
    //     i++;
    // }
    // dst[i] = '\0';
    // return dst;
    char* ret = dst;
    while(*src != '\0'){
        *dst = *src;
        dst ++;
        src ++;
    }
    *dst = '\0';
    return ret;
}