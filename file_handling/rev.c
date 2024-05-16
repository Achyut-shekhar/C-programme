#include<stdio.h>
int rev(int x)
{
    int i,reve=0,rem;
    while(x!=0)
    {
        rem=x%10;
        reve=reve*10+rem;
        x=x/10;
    }
    x=reve;
    return x;
}
int main()
{
    FILE *f,*fr;
    int i,n,num,x=0;
    printf("input the number of elements");
    scanf("%d",&n);
    f=fopen("num.txt","w");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
       
        putw(num,f);
    }
    fclose(f);
    fr=fopen("copy.txt","w");
    f=fopen("num.txt","r");
    while((num=getw(f))!=EOF)
    {   
        x=rev(num);
        putw(x,fr);
        printf("%d\n",x);
    }
    fclose(fr);
    fclose(f);
}