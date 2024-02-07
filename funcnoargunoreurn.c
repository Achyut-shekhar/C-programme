//NO ARGUMENT NO RETURN TYPE
#include<stdio.h>
void sum(void); //no argument void means nahi pata argument kya hai
void main()
    {
        sum();
         
    }
    void sum(void)
    {
        int a=5,b=7,sum=0;
        sum =a+b;
        printf("sum is %d",sum);
    }  //no return kuch return nahi karaya void ki vajah se return hoga but
        //main function mai koi argument nahi hai to save nahi hoga
    
