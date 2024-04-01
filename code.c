#include<stdio.h>
void main()
{ int A[10]={1,2,3,4};
  static int a,b,i;
for(i=0;i<10;++i)
{
    if(A[i]%2==0 && A[i]%5==0)
       ++a;
       else
       ++b;
}
printf("%d\t%d\t%d\t",a,b,a-b);
    
}