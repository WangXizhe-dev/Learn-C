#include<stdio.h>
struct point{
    int x;
    int y;
};
struct point GetPoint(void){
    struct point p;
    scanf("%d %d",&p.x,&p.y);
    return p;
}
struct point* InputPoint(struct point* p){
    scanf("%d %d",&p->x,&p->y);
    return p;
}
int main(){
    struct point p1={0},p2={0};
    p1 = GetPoint();
    InputPoint(&p2);
    printf("P1(%d,%d)\n",p1.x,p1.y);
    printf("P2(%d,%d)\n",p2.x,p2.y);
    return 0;
}
