#include <stdio.h>


int main()
{
    int m, n, i, j, k=0,t=0,sum=0;

    printf("input row and column");
    scanf("%d %d", &m ,&n);
    int a[m][n];
      for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                        scanf("%d", &a[i][j]);
        }
     for (i = 0; i < m; i++)
        {
                int sum = 0;
                for (j = 0; j < n; j++)
                {
                        sum = sum + a[i][j];
                }
                if (sum > t)
                {
                        t = sum;
                        k = i;
                }
        }
    printf("%d  %d", t, k + 1);

    return 0;
}