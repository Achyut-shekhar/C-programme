#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=NULL;
    char c;
    char str[50];
    f=fopen("abc.txt","r");
    if(f==NULL)
    {
        printf("error");
        exit(1);
    }
    fseek(f,4,SEEK_SET);
    c=fgetc(f);
    printf("%c\n",c);
    fseek(f,-3,SEEK_CUR);
    c=fgetc(f);
    printf("%c\n",c);
    fseek(f,-4,SEEK_END);
    c=fgetc(f);
    printf("%c\n",c);
 fclose(f);
}
