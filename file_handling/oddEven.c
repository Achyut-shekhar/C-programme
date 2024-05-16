#include<stdio.h>
int main()
{
    int i,num,ce=0,co=0,n,a,b;
    FILE *fp,*fo,*fe;
    fp=fopen("abc.txt","w");
    printf("input the number of element to store");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&n);
        putw(n,fp);
    }
    fclose(fp);
    fo=fopen("odd.txt","w");
    fe=fopen("even.txt","w");
    fp=fopen("abc.txt","r");
    while((n=getw(fp))!=EOF)
    {
        
        if(n%2==0)
        {
            fprintf(fe,"%d\n",n);
            ce++;
        }
        else
        fprintf(fo,"%d\n",n);
        co++;
    }
    fclose(fe);
    fclose(fo);
    fclose(fp);
    fo=fopen("odd.txt","r");
    fe=fopen("even.txt","r");
    printf("content of odd.txt\n");
    while(fscanf(fo,"%d",&a) != EOF)
    {
        
        printf("%d\n",a);
    }

  fclose(fo);
   printf("content of even.txt\n");
   while(fscanf(fe,"%d",&a) != EOF)
    {
        
        printf("%d\t",a);
    }
fclose(fe);


}