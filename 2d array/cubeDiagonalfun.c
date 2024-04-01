#include <stdio.h>
int pd(int a[][3],int n,int k)
{ int i,j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (i == j)
            {
               a[i][j]=a[i][j]*a[i][j]*a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[ ][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum = 0;
    pd(a,3,3);

   
    return 0;
}