#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("input num of rows and columns\n");
    scanf("%d", &m);
    scanf("%d", &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d\t", &a[i][j]);
        printf("\n");
    }
    int t = a[0][0], k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ( a[i][j]<t)
            {

                t=a[i][j];
            }
            
        }
        printf("%d",t);
    }
}