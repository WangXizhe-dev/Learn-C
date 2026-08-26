#include<stdio.h>
int main(){
    const int size = 3;
    int board[size][size];
    int i,j;
    //读取
    for(i = 0;i < size;i++){
        for(j = 0;j< size;j++){
            printf("请输入第%d行,第%d列的棋子,X为1,O为0",i+1,j+1);
            scanf("%d",&board[i][j]);
        }
    }
    //-1平局，1X胜，0O胜利
    int numberOfO = 0;
    int numberOfX = 0;
    int result = -1;

    //判断行
    for(i = 0;i<size;i++){
        numberOfO = 0;
        numberOfX = 0;
        for(j = 0;j< size ;j++){
            if (board[i][j]==1){
                numberOfX ++;
            }else{
                numberOfO ++;
            }
        }
        if (numberOfO == size){
            result = 0;
        }else if (numberOfX == size){
            result = 1;
        }
    }

    //判断列
    if (result == -1){
        for(j = 0;j < size;j++){
            numberOfO = 0;
            numberOfX = 0;
            for(i = 0;i< size ;i++){
                if (board[i][j]==1){
                    numberOfX ++;
                }else{
                    numberOfO ++;
                }
            }
            if (numberOfO == size){
                result = 0;
            }else if (numberOfX == size){
                result = 1;
            }
        }
    }

    //判断对角线
    if(result == -1){
        numberOfO = 0;
        numberOfX = 0;
        for(i = 0;i < size;i++){
            if (board[i][i]==1){
                    numberOfX ++;
            }else{
                    numberOfO ++;
                }
        }
        if (numberOfO == size){
                result = 0;
        }else if (numberOfX == size){
                result = 1;
            }
    }
    if(result == -1){
        numberOfO = 0;
        numberOfX = 0;
        for(i = 0;i < size;i++){
            if (board[i][size-i-1]==1){
                    numberOfX ++;
            }else{
                    numberOfO ++;
                }
        }
        if (numberOfO == size){
                result = 0;
        }else if (numberOfX == size){
                result = 1;
            }
    }

    //最终判断
    if (result == -1){
        printf("平局\n");
    }else if(result == 1){
        printf("X获胜\n");
    }else{
        printf("O获胜\n");
    }
    return 0;
}