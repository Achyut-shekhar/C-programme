#include<stdio.h>
int main()
{
    int a[10],n,i,j,pos,elem;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
    {scanf("%d", &a[i]);
    }
   printf( " Define the position and element which you want to insert: \n ");  
    scanf (" %d%d",&pos,&elem);  
    for (i=n; i>=pos; i--)  
        {  
            a[i]=a[i-1]; // assign arr[i+1] to arr[i]  
        }  
          a[pos-1]=elem;
          n=n+1;
        printf (" \n The resultant array is: \n");  
          
    
     // display the final array  
         for(i = 0; i< n; i++)  
        {  
                printf (" %d \n", a[i]);  
        }  

    
   
    
        
    
}