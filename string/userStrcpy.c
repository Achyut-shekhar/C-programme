#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i=0;
    char s[20],a[20]={a};
    printf("input the strings\n");
    fgets(s,20,stdin);
    printf("\n");
   while(s[i]!='\0'){
        a[i]=s[i];
        i++;
   }
   
   puts(a);

    return 0;
}
