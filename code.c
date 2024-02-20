#include <stdio.h>
#include <string.h>
int main()
{
        char str[30];
        int i,n,l1,t,words;
        printf("input string\n");
         fgets(str,30,stdin);
         l1=strlen(str);
         printf("length is %d\n",l1);
         str[l1]=' ';
         str[l1+1]='\0';
        i=0;
        while(str[i] != '\0')
    {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
    
}