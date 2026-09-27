#include <stdio.h>
#include <string.h>

int mycmp(const char* s1,const char* s2);
int main() {
    char s1[] ="abc";
    char s2[] ="abd";
    printf("%d\n",mycmp(s1,s2));
    return 0;
}

int mycmp(const char* s1,const char* s2){
    int i = 0;
    while (s1[i] == s2[i]){
        if (s1[i] ==0){
            break;
        }else{
            i++;
        }
    }
    return s1[i] - s2[i];
}