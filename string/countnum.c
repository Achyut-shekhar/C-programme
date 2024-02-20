#include <stdio.h>
#include <string.h>
int main()
{
        char str[30];
        int i,n,l1;
        printf("input string\n");
         scanf("%[^\n]", str);
         l1=strlen(str);
         printf("length is %d",l1);
         str[l1]=' ';
         str[l1+1]='\0';
         puts(str);
    
}