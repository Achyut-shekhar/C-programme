#include <stdio.h>
#include <string.h>
int main()
{
    int i, j = 0, let = 0, count = 0, len, len2, num;
    char str[40], substr[40];
    printf("input the string");
    fgets(str, 40, stdin);
    len = strlen(str);
    i = 0;
    str[len] = ' ';
    str[len+1] = '\0';
    printf("input the number of words\n");
    scanf("%d", &num);
    i=0;j=0;
    while (str[i] != '\0')
    {
        while(str[i] != ' ')
        {
            substr[j] = str[i];
            i++;
            j++;
        }
        substr[j] = '\0';
        len2 = strlen(substr);
          if (num == len2 )
        {
            count++;
        }
        i++;
        j = 0;
        
    }

    printf("count of word is %d", count);
}