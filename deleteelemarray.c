#include<stdio.h>
int main()
{
    int a[10],n,i,j,pos;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element");
    for(i=0;i<n;i++)
    {scanf("%d", &a[i]);
    } 
   printf( " Define the position of the array element where you want to delete: \n ");  
    scanf (" %d", &pos);  
    for (i = pos; i <= n ; i++)  
        {  
            a[i-1]=a[i]; // assign arr[i+1] to arr[i]  
        }  
          n=n-1;
        printf (" \n The resultant array is: \n");  

          
    
     // display the final array  
         for(i = 0; i< n; i++)  
        {  
                printf (" %d \n", a[i]);  
        }  

    
   
    
        
    
}