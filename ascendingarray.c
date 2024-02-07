#include<stdio.h>
int main()
{
    int a[10],n,i,j,min,max,res;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
    {scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                res=a[i];
                a[i]=a[j];
                a[j]=res;
                
            }
        }
        
    }

    for(i=0;i<n;i++)
    {
        printf("ascending order is %d\n",a[i]);
    }
    
        
    
}