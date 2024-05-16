#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   FILE *fp=NULL;
    char str[50];
    int i;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);
    fputs(str,fp);
    fclose(fp);

}