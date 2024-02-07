#include<stdio.h>
int power(int x,int y)

{
    int f=1,i;
    for(i=1;i<=y;i++)
    {
        f=f*x;

    }
    return f;

}
void main()
{
   int a,x,y;
   printf("input x and y");
   scanf("%d %d",&x,&y);
   a=power(x,y);
   printf("%d",a);
}