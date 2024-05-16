#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=NULL;
    int i;
    f=fopen("abc.txt","r+");
    if(f==NULL)
    {
        printf("error");
        exit(1);
    }
    fprintf(f,"%s","jenny is awesome");
    fclose(f);
}