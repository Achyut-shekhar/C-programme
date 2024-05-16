//in this first we will transpose and then swap the matrix to rotate the matrix
// // 1 2 3     7 4 1                                      1 4 7
//    4 5 6  =  8 5 2 (90 degree rotated)   TRANSPOSE =    2 5 8
//    7 8 9     9 6 3                                      3 6 9
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum = 0;
// transpose of the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (i != j)
            {
                int t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }
    //swap
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3/2; j++)//in this j<3/2 is because it should not swap the middle element
        {   
            int t = a[i][j];
            a[i][j] = a[i][2];
            a[i][2] = t;
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}