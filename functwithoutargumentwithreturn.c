// WITHOUT ARGUMENT WITH RETURN
#include<stdio.h>
int sum(void);
void main()
{
    int s;
    s=sum();
    printf("sum is %d",s);
}
int sum(void)
{
    int a=5,b=7;
    return a+b;
}