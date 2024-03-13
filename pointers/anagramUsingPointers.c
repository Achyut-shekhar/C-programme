#include<stdio.h>
#include<string.h>
int anagram(char *p,char *q,int l){ int f=0,i;
    for(i=0;i<l;i++){
        if(*(p+i)!=*(q+i)){
            f=1;
            break;

        }
    }
    return f;
}
void sort(char *p,int l){
    int i,j,t;
    char k;
    for(i=0;i<l;i++){
        for(j=0;j<l-i-1;j++){
            if(*(p+i)<*(p+j)){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
int main(){
    void *p,*q;
    char str1[40],str2[40];
    int i,j,k,l1,l2,res;
    printf("input the first string");
    fgets(str1,40,stdin);
    printf("input the second string");
    fgets(str2,40,stdin);
    p=str1;
    q=str2;
    l1=strlen(str1);
    l2=strlen(str2);
    sort(str1,l1);
    sort(str2,l2);
    res=anagram(str1,str2,l1);
    if(res==0){
        printf("anagram");
    }
    else
    printf("not");
}