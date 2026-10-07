#include<stdio.h>
#include<string.h>
int main(void){
    char s[100];
    printf("请输入一个句子");
    if(fgets(s,sizeof(s),stdin) == NULL){
        return 1;
    }
    int spa[10] = {0};
    int i = 0;
    int cnt = 0;
    int j = 0;
    while(s[i]!= '\0'){
        if (s[i] == ' '){
            cnt = 0;
            while(s[i] == ' '){
                i++;
                cnt++;
            }
            spa[j] = cnt;
            j++;
        }
        i++;
    }
    // for(i = 0;i< sizeof(spa)/sizeof(spa[0]);i++){
    //     printf("%d\n",spa[i]);
    // }
    //printf("%d\n",j);
    int t = 0;
    int p = 0;
    for(i = 0;i < j;i++){
        for(t = 0;t < strlen(s);t++){
            if(s[t] == ' '&& s[t+1] == ' '){
                for(p = t + 1;p<strlen(s);p++){
                    s[p] = s[p+spa[i]-1];
                }
                s[p] = '\0';
                break;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}