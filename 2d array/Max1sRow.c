#include <stdio.h>
int main()
{     
    int i, j, m, n;
    printf("input num of rows and columns\n");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for (i = 0; i < m; i++)
        {
                for (j = 0; j < n; j++)
                        scanf("%d", &a[i][j]);
                        printf("\n");
        }
    int t=0,k;
    for (i = 0; i < m; i++)
    { int count=0;
        for (j = 0; j< n; j++)
        {
            if(a[i][j]==1){
                count++;
            }
           
        }
         if(t<count){
                
                t=count;
                k=i;
            }
    }
    printf("%d is the num of 1s and %d is row",t,k+1);
}