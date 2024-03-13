#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;
    // int *x;
    // x = &a;
    // printf("%p\n", &a);
    *x=7; // a is changed therefore we can change the value of variable by pointers
    printf("%p\n", *x);
    printf("%d\n", a);

    return 0;
}