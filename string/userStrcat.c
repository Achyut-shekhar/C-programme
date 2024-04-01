#include <stdio.h>
#include <string.h>
int main()
{
    int l1, l2, i = 0, t = 0;
    char s[20], a[20];
    printf("input the strings\n");
    fgets(s, 20, stdin);
    fgets(a, 20, stdin);
     l1=strlen(s);
     s[l1-1]=' '; //to remove \n//
    
 /* Concatenating second string to first string */
 for(i=0;a[i]!='\0';i++)
 {
  s[l1+i] = a[i];
 }
 s[l1+i]='\0';
 printf("Concatenated string is: %s", s);
    return 0;
}
