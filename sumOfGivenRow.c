#include<stdio.h>
int main(){
    int a[40][40],m,n,i,j,k,sum=0;
    printf("input the row and column");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("input the given row");
    scanf("%d",&k);
    for(j=0;j<n;j++)
    {
        sum+=a[k-1][j];
    }
    printf("%d",sum);

}