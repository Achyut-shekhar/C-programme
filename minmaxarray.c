#include<stdio.h>
int main()
{
    int a[10],n,i,min,max;
    printf("enter tthe no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
     {scanf("%d", &a[i]);
     }
     min=max=a[0];
     for(i=1;i<n;i++)
     {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
     }
   
    printf("******output******\n");
    printf("ACHYUT SHEKHAR SINGH,roll no.03\n");
    printf("minimum of array is %d\n",min);
     printf("maximum of array is %d",max);
    
    return 0;
}