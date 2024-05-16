#include<stdio.h>
int main()
{
    FILE *fp,*fp1;
    char ch[50],c;
    fp=fopen("abc.txt","r");
    fp1=fopen("copy.txt","w");
    while(!feof(fp)){
    fscanf(fp,"%s",ch);
    fprintf(fp1,"\n%s",ch);
    }
    fclose(fp);
    fclose(fp1);
     fp1=fopen("copy.txt","r");
     while(!feof(fp1)){
        c=fgetc(fp1);
        printf("%c",c);
     }

}
