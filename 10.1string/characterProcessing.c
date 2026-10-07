#include<stdio.h>
int main(void){
    printf("请输入一串字符\n");
    char s[100];
    scanf("%99s",s);
    int i = 0;
    int up=0,low=0,num=0,spa=0,oth = 0;
    while(s[i] != '\0'){
        if(s[i] >= 65 && s[i]<= 90){
            up ++;
            s[i] += 'a' - 'A';
        }else if(s[i] >= 97 && s[i]<= 122){
            low ++;
            s[i] += 'A' - 'a';
        }else if(s[i] >= 48 && s[i]<= 57){
            num ++;
        }else if(s[i] == 32){
            spa ++;
        }else{
            oth ++;
        }
        i++;
    }
    printf("转换后：%s\n",s);
    printf("大写字母:%d个\n",up);
    printf("小写字母:%d个\n",low);
    printf("数字:%d个\n",num);
    printf("空格:%d个\n",spa);
    printf("其他字符:%d个\n",oth);
    return 0;
}