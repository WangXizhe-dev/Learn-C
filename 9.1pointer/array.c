#include<stdio.h>
int main(){
    int a[] = {10, 20, 30, 40, 50};

    int *p = a + 2;

    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", p[-1]);
    printf("%d\n", *(a + 4));
    return 0;
}