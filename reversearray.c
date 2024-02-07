#include<stdio.h>
int main()
{
    int a[10],n,i,j,t;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
    {scanf("%d", &a[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("******output******\n");
         printf("ACHYUT SHEKHAR SINGH,roll no.03\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);

    }
    
   
    
   
    return 0;
}