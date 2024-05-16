#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=NULL;
    int i;
    char s[50];
    f=fopen("abc.txt","a+");
    if(f==NULL)
    {
        printf("error");
        exit(1);
    }
    fprintf(f,"%s"," achyut is awesome\n awesome");
    rewind(f);
    while(!feof(f))
    {
    fgets(s,50,f);
    printf("%s",s);
    }
    fclose(f);
}