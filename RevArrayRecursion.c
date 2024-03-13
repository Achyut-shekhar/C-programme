#include <stdio.h>
int rev(int a[],int i,int j){
        int t;
        if(i<j){
                // t=*(a+i);     
                // *(a+i)=*(a+j);
                // *(a+j)=t;
                    *(a+i)=*(a+i)^*(a+j);
                    *(a+j)=*(a+i)^*(a+j);
                    *(a+i)=*(a+i)^*(a+j);
                rev(a,i+1,j-1);

        }

      
}
int main()
{
       int a[50],i=0,j=0;
       printf("input array");
       for(i=0;i<5;i++)
       {
        scanf("%d",&a[i]);
       }
       rev(a,0,4);
         for(i=0;i<5;i++)
        printf("%d",a[i]);
       return 0;
}