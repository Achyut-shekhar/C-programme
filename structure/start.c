#include<stdio.h>
struct person
{
    char name[50];
    int salary;
    int age;
};
int main()
{
    struct person p[50];
    printf("for first person\n");
    printf("input name");
    scanf("%[^\n]s",p[0].name);
    printf("input salary");
    scanf("%d",&p[0].salary);
    printf("input age");
    scanf("%d",&p[0].age);
    getchar();
    printf("for second person\n");
    printf("input name");
    scanf("%[^\n]s",p[1].name);
    printf("input salary");
    scanf("%d",&p[1].salary);
    printf("input age");
    scanf("%d",&p[1].age);

    printf("%s\n",p[1].name);
    printf("%d",p[0].age);
}
