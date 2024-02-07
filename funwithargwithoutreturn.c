#include<stdio.h>
void sum(float,float);
void main()
{
    float a,b;
    printf("enter a and b\n");
    scanf("%f%f",&a,&b);
    sum(a,b);

}
void sum(float x,float y)
{
float sum=0;
sum=x+y;
printf("sum is %f",sum);
}