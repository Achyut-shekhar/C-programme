#include<stdio.h>
int main()
{
    int a[10],n,i,evensum=0,oddsum=0;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element\n");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     } 
     printf("enter the no. of elements to be stored");
    scanf("%d",&n);
   for(i=n-1;i>=0;i--)
   {
    printf("%d\n",a[i]);
   }
   return 0;
}