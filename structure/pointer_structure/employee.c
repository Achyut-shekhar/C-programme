// inout 10 employee and print the designation of a person getting higher salary
#include<stdio.h>
typedef struct  employee
{
    char name[20];
    char designation[20];
    float salary;

}emp;
int main()
{
    int i,j;
    emp e[10],t;
    printf("inout reads");
    for(i=0;i<3;i++)
    {
        scanf("%19s%19s%f",e[i].name,e[i].designation,&e[i].salary);
        getchar();
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(e[i].salary<e[j].salary)
            {
            t=e[i];
            e[i]=e[j];
            e[j]=t;
                }
        }
    }
     
    printf("%s%s %f",e[0].name,e[0].designation,e[0].salary);
    return 0;

}
