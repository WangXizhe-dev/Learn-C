#include<stdio.h>
#include<string.h>

char* mycpy(char* dst,const char* src);

int main(void){
    char src[] = "hello";
    char dst[100];
    //mycpy(dst,src);
    printf("src:%s\n",src);
    printf("dst:%s\n",mycpy(dst,src));
    return 0;
}

char* mycpy(char* dst,const char* src){
    // char* ret = dst;
    // while(*src != '\0'){
    //     *dst = *src;
    //     dst ++;
    //     src ++;
    // }
    // *dst = '\0';
    // return ret;
    char* ret = dst;//保存首地址
    while((*dst++ = *src++)!= '\0'){

    }
    return ret;//返回dst的首地址
}