#include<stdio.h>
int main(){
    enum day{MON=1,TUE,WED,THU,FRI,SAT,SUN,Numdays};
    char days[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    for(int i = MON;i<Numdays;i++){
        printf("%d:%s\n",i+1,days[i]);
    }
    return 0;
}