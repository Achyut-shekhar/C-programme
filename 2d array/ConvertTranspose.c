#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,sum=0;
    //transpose
    for(i=0;i<3;i++)
    {  //in this we took j=i because if we are taking j=0 it will swap its self twice and make a same matrix//
         for(j=i;j<3;j++)
        {
            if(i!=j){
                 int t= a[i][j];
                  a[i][j]=a[j][i];
                  a[j][i]=t;
            }
        }
       
    }
     for(i=0;i<3;i++)
    {  
        for(j=0;j<3;j++)
        {
            
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}