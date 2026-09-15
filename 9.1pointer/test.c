#include <stdio.h>

void change(int *p)
{
    *p += 10;
}

int main()
{
    int x = 5;
    int *p = &x;

    change(p);

    printf("%d %d\n", x, *p);

    return 0;
}