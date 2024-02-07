#include<stdio.h>
int main()
{
    int a[10],n,i,evensum=0,oddsum=0;
    printf("enter the no. of elements to be stored");
    scanf("%d",&n);
    printf("input array element\n");
    for(i=0;i<n;i++)
     {scanf("%d", &a[i]);
     if(i%2==0)
     {
        evensum=evensum+a[i];
     }
     else
     {    
        oddsum=oddsum+a[i];
     }
     }
   
    printf("******output******\n");
     printf("ACHYUT SHEKHAR SINGH,roll no.03\n");
    printf("sum of all the even elements are:%d\n",evensum);
     printf("sum of all the odd elements are:%d",oddsum);
    return 0;
}