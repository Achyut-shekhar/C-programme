#include <stdio.h>
#include <string.h>
int main()
{
        char str[30],substr[30];
        int i,l, n, count,j,temp;
        printf("input string\n");
        fgets(str, 30, stdin);
        l=strlen(str);
        for(i=0;i<l/2;i++)
        {
             temp=str[i];
             str[i]=str[l-i-1];
             str[l-i-1]=temp;
        }
    puts(str);
}
