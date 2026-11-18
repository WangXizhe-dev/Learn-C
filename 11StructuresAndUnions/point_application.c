#include<stdio.h>
struct point{
    double x;
    int y;
};
void getpoint(struct point* p){
    scanf("%d %d",&p->x,&p->y);
}
struct point midpoint(struct point p1,struct point p2){
    struct point p={p.x,p.y}
}
int main(){
    struct point p1={0},p2={0};
    getpoint(&p1);
    getpoint(&p2);

    return 0;
}