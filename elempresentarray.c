#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0,element,z;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    
    for(i=0;i<n;i++)
     {scanf("%d", &a[i]);
       
     }
     printf("enter the element want to search");
     scanf("%d",&element);
     for(i=0;i<n;i++)
     {
        if(element==a[i])
        {
            z++;
        }
     }
      
   
    printf("******output******\n");
    printf("ACHYUT SHEKHAR SINGH,roll no.03\n");
    
    if(z>0)
    printf("element present in array");
    else
    printf("element is not present in array");
    return 0;
}