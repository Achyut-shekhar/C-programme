#include<stdio.h>
typedef struct date{
    int date;
    char month[10];
    int year;
}date;
int main()
{
    int i,n;
    date d[2];
    printf("inout date month year");
    for(i=0;i<2;i++)
    {
        scanf("%d %d %[^\n]s", &d[i].date,&d[i].year,d[i].month);
    }
   
        if(d[0].date==d[1].date)
        {
            printf("equal");
        }
        else
        printf("not equal");
    
    return 0;
}