#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i=0,len;
    char s[20];
    printf("input the strings\n");
    fgets(s,20,stdin);
    while(s[i]!='\0'){
        l++;
        i++;
    }
    printf("%d\n",l-1);
    len=strlen(s);
    printf("%d",len);
    return 0;
    
} 
