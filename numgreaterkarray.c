#include<stdio.h>
int main()
{
    int a[10],n,i,j,t=0,k,y=0,z=0;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
    {scanf("%d", &a[i]);
    }
   printf("input number k ");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
    if(k>a[i])
    {
        t++;
    }
     else if(k==a[i])
     {
        y++;
     }
     else
     {
        z++;
     }
   }
   printf("number greater than k are %d\n",t);
   printf("number equal to k are %d\n",y);
   printf("number less than k are %d\n",z);
    
   
    return 0;
}