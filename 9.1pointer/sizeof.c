#include <stdio.h>

void f(int a[])
{
    printf("%zu\n", sizeof(a));
}

int main()
{
    int a[10];

    printf("%zu\n", sizeof(a));

    f(a);

    return 0;
}