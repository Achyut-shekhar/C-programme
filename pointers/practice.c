#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;// int*- int ka address store krta hai
    int ** y=&x; // int ** - int * ka address store krta hai
    // printf("%p\n", &x);
    // printf("%p\n", y);
    printf("%d\n", *x);
    printf("%d\n", **y);

    return 0;
}