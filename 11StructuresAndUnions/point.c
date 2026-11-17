#include<stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point p1;
    struct point p2;
    printf("请输入第一个点的坐标,x坐标和y坐标用空格隔开");
    //getchar();
    scanf("%d %d",&p1.x,&p1.y);
    printf("请输入第二个点的坐标,x坐标和y坐标用空格隔开");
    //getchar();
    scanf("%d %d",&p2.x,&p2.y);
    double midx = (p1.x + p2.x)/2.0;
    double midy = (p1.y + p2.y)/2.0;
    printf("中点坐标为(%.1f,%.1f)\n",midx,midy);
    return 0;
}