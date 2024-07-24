#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f;
    int n;
    f=fopen("count.txt","r");
    fseek(f,0,2);
    n=ftell(f);
    printf("%d",n);
    return 0;
}