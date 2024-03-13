#include <stdio.h>
#include <string.h>
int main()
{
        char str[30],substr[30];
        int i, n, count,j;
        printf("input string\n");
        fgets(str, 30, stdin);
        for (i = 0; str[i] != '\0'; i++)
        {
               
                if (str[i] == ' ')
                        count++;
        }
      

        printf("Number of words in given string are: %d\n", count + 1);
}