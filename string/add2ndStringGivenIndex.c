#include<stdio.h>
#include<string.h>
int main(){
    char str1[40],str2[40];
    int m,i=0,l,j;
    printf("input the string1 and string2");
    fgets(str1,40,stdin);
    fgets(str2,40,stdin);
    printf("input the index");
    scanf("%d",&m);
    l=strlen(str2);
   
    for(i=0,j=m;i<l-1;i++,j++)
    {
         str1[j]=str2[i];
    }
    printf("%s",str1);
}
