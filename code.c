#include<stdio.h>
#include<string.h>

/* Function Prototype*/


/* Main Function */
int main()
{int i,j,l=0,u=0,len,x;
    char str[40];
    printf("input the string");
    fgets(str,40,stdin);
    len=strlen(str);
  i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            u++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            l++;
        }
        
        i++;
    }
    printf("%d %d",u,l);
}