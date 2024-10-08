#include<stdio.h>
int main()
{
    int i,j,z,n;
    printf("input n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           printf(" ");  
        }
        for(z=1;z<=i;z++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}