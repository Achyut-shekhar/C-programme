#include<stdio.h>
int main()
{
    int a[50],b[50],i,j,n,m;
    int *ptr,*ptr1;
    printf("input the no. of values in a");
    scanf("%d",&n);
    printf("input the values in a");
   
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
    
     printf("input the no. of values in b");
     scanf("%d",&m);
   printf("input the  values in b");
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[j]);
        }
    ptr=a;
    ptr1=b;
    printf("intersection of a and b array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(*(ptr+i)==*(ptr1+j))
            {
                printf("%d\n",*(ptr+i));
                break;
            }
        }
    }
    
   
    
    return 0;
}