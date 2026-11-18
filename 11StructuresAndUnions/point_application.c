#include<stdio.h>
struct point{
    double x;
    double y;
};
void getpoint(struct point* p){
    scanf("%lf %lf",&p->x,&p->y);
}
struct point Midpoint(struct point p1,struct point p2){
    struct point midpoint={(p1.x+p2.x)/2.0,(p1.y+p2.y)/2.0};
    return midpoint;
}
int main(){
    struct point p1={0},p2={0},midpoint={0};
    getpoint(&p1);
    getpoint(&p2);
    midpoint = Midpoint(p1,p2);
    printf("中点为(%.1f,%.1f)\n",midpoint.x,midpoint.y);

    return 0;
}