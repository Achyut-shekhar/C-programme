#include<stdio.h>
int main()
{
    FILE *f,*fp;
    int i,n,num,c=0;
    printf("input the number of element");
    scanf("%d",&n);
    f=fopen("prime.txt","w");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {   scanf("%d",&num);
        fprintf(f,"%d\n",num); // in this \n is very important without this code will not be able to fetch the data from the file in further code
    }
    fclose(f);
    f=fopen("prime.txt","r");
    if (f == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(f, "%d", &num) != EOF) {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                c++;
                break;
            }
        }
        if (c==0) {
            printf("%d\n", num);
        }
    }
    fclose(f);
}