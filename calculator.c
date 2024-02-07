#include<stdio.h>
int main()
{
    int a,b,ch;
    char op;
       
        printf("choose +,-,/,*\n");
        scanf("%c",&op);
        printf("input the value a and b\n");
        scanf("%d%d",&a,&b);
         
        switch(op)
        {
            case'+':
           
            printf("sum is %d",a+b);
            break;
            case'-':
             
            printf("sum is %d",a-b);
            break;
            case'*':
            
            printf("sum is %d",a*b);
            break;
            case'/':
            
            printf("sum is %d",a/b);
            break;
            default:
            printf("wrong choice");

        }
       
  
    
}