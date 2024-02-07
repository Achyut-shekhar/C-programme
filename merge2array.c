#include <stdio.h>
int main()
{

    int a[10], b[10], c[10], m, n, i, j, t = 0;
    printf("enter tthe no. of elements to be stored in a");
    scanf("%d", &n);
    printf("input array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
         c[i] = a[i];
    }
    printf("enter the no. of elements to be stored in b");
    scanf("%d", &m);
    printf("input array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        c[n + i] = b[i];
    }
    // for (i = 0; i < n; i++)
    // {
    //     c[i] = a[i];
    // }
    // for (i = 0; i < m; i++)
    // {
    //     c[n + i] = b[i];
    // }
    for (i = 0; i < m + n; i++)
    {
        for (j = 0; j < m + n; j++)
        {
            if (c[i] < c[j])
            {
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
        }
    }
    for (i = 0; i < n + m; i++)
    {
        printf("\n%d", c[i]);
    }
}