#include <stdio.h>
int main()
{
    int a[10], i, n, j,t=0;
    printf("input the no.of element");
    scanf("%d", &n);
    printf("input array element");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    t=0; 
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            // use if statement to check duplicate element
            if (a[i] == a[j])
            {
                t++;
                break;
            }
        }
      
    }
     printf("\n%d is no. of duplicate",t);
}