#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int a = 1, b = 2;
    printf("before swap: a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("after swap: a=%d, b=%d", a, b);
    return 0;
}