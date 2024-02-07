#include <stdio.h>
int main()
{
    int a[10], i, n, j,k;
    printf("input the no.of element");
    scanf("%d", &n);
    printf("input array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // use if statement to check duplicate element
            if (a[i] == a[j])
            {
                // delete the current position of the duplicate element
                for (k = j; k<=n; k++)
                {
                    a[k] = a[k + 1];
                }
            }
        }
        n = n - 1;
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
    }
}