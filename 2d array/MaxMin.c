#include <stdio.h>
int main()
{
    int a[2][3];
    int i, j, l, k;
    printf("input the 2d array ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    int max = a[0][0], min = a[0][0];

    printf("sum of 2d array maximum and minimum \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (max < a[i][j])
            {
                l = a[i][j];
            }
            if (min > a[i][j])
            {
                k = a[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("maximum is %d minimum is %d", l, k);
    return 0;
}