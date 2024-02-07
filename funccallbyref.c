#include<stdio.h>
void fun(int*,int*);
void main()\
{
    int x=5,y=7;
    fun(&x,&y);
    printf("inside main calling\n");
    printf("x=%d y=%d",x,y);

}
void fun(int* x ,int* y)
{
    *x=7;
    *y=5;
    printf("inside fun\n");
    printf("x=%d y=%d\n",*x,*y);
    
}
//output
//inside fun
//x=7 y=5
//inside main calling
//x=7 y=5