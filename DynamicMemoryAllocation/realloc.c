// realloc helps in increasing an d decreasing the already allocated memory whether malloc or calloc when we increase the memory it will copy the exisiting value and will put the garbage value in updated memory until we intiliaze and may have new or same address.when we decrease the memory it will have the same address and will print the previous value according the updated size.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i ,n,*ptr,*ptr1;
    printf("enter the no. values");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("enter values");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("enter the updated no. of values");
    scanf("%d",&n);
    ptr1=(int *)realloc(ptr,n*sizeof(int));
    printf("previous address:%d  current address:%d\n",ptr,ptr1);
    printf("values are:\n");
      for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr1+i));
    }
    free(ptr1);

}