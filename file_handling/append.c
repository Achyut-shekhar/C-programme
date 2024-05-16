#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[100],str[100];
    fp=fopen("abc.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the content u want to append\n");
    gets(s);
    fprintf(fp,"\n%s",s);
    printf("successfully appended\n");
    fclose(fp);
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp)){
    fgets(str,100,fp);
    printf("%s",str);
    }
    fclose(fp);
}