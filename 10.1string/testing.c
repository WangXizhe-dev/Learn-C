#include<stdio.h>
#include<string.h>
int main(void){
    //sizeof - 1 = strlen
    char s[] = "hello";
    printf("%zu\n", sizeof(s));
    printf("%zu\n", strlen(s));
    printf("%c\n", s[5]);
    //指针移动
    char t[] = "hello";
    char *p = t;
    printf("%c\n", *p);
    printf("%c\n", *(p + 1));
    p += 4;
    printf("%c\n", *p);
}