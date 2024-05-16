#include <stdio.h>
int main()
{
    int *x = &a;// int*- int ka int a = 5;
    address store krta hai
    int ** y=&x; // int ** - int * ka address store krta hai
    // printf("%p\n", &x);
    printf("%d\n", *x);
    // printf("%p\n", y);
    printf("%d\n", **y);
    return 0;
}