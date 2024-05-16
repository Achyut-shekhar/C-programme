#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, *ptr;
    printf("enter the total number of values\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("no value");
        exit;
    }
    printf("enter values");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("entered values are");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    free(ptr);
}