#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    char ch;
    int c=0;
    fp=fopen("abc.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {   
        if(ch=='\n')
        {
           c++;
        }
    }
    fclose(fp);
    printf("%d",c);
}