//PASS BY REFRENCE
#include <stdio.h>
void swap(int *x, int *y){
    int t;
    t=*x; // t=2 or a 
    *x=*y; //a=b or a=9
    *y=t; // b=t or b=2
    return;
}
int main()
{ int a=2,b=9;
 swap(&a,&b);
printf("the value of a:%d\n",a); //9
printf("the value of b:%d\n",b);//2
scanf("%d",&b);
 return 0;   
}