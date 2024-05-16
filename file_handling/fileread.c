#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   FILE *fp=NULL;
    char str[100];
    int i;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    // in this we are using ch to fetch the character and the printing the statement in the print statement character by character.

//    while(!feof(fp))
//    {
//      ch=fgetc(fp);         
//      printf("%c",ch);
//    }

//now we are doing the same thing we the help of fgets.
while(!feof(fp))
{
    fgets(str,100,fp);
    printf("%s",str);
}

   fclose(fp);
}