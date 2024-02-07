#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],n,i,k,sum;
    printf("enter the no. of elements to be stored\n");
    scanf("%d",&n);
    printf("input array element\n");
    for(i=0;i<n;i++)
     {
        scanf("%d", &a[i]);
     }
     printf("enter the no. of elements to be stored\n");
    scanf("%d",&k);
    printf("input array element\n");
    for(i=0;i<n;i++)
     {
        scanf("%d", &b[i]);
     }
     for(i=0;i<n;i++)
     {
        c[i]=a[i]+b[i];
        printf("elements is c array is %d\n",c[i]);
     }
     


}