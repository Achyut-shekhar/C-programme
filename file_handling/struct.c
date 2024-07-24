// write a code to store n employee records in a file with fields employee id, name and salary display name of all the employee having salary above 50,000
#include<stdio.h>
#include<stdlib.h>
typedef struct emp{
    int id;
    char name[50];
    int salary;
}emp;
int main()
{
    FILE *f;
    emp e;
    int i,n;
    printf("input the no. of records");
    scanf("%d",&n);
    f=fopen("record.txt","w");
    if(f==NULL)
    {
        printf("error");
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&e.id);
        getchar();
        fgets(e.name,sizeof(e),stdin);
        scanf("%d",&e.salary);
        getchar();
      


    }
      fwrite(&e,sizeof(e),n,f);
    fclose(f);
    f=fopen("record.txt","r");
    if(f==NULL)
    {
        printf("error");
    }
    while(!feof(f))
        {    fread(&e,sizeof(e),1,f);
            if(e.salary>50000)
            {
                printf("%d\n%s%d",e.id,e.name,e.salary);
            }
        }
    
}