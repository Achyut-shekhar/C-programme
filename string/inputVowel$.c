#include<stdio.h>
#include<string.h>
int main(){
    int i,j,l=0,u=0,len,x;
    char str[40];
    printf("input the string");
    fgets(str,40,stdin);
    len=strlen(str);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            str[i]='$';
        }
        else
        str[i]='#';
        
    }
  printf("%s",str);
}