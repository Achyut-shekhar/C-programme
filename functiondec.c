#include<stdio.h>
int sum(void);
int main() //function declaration
{    int c;
    c=sum(); //function calling
    printf("sum is %d",c);
}
int sum(void)   //function definition
{
    int a,b,s=0;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    s=a+b;
    return s;

}