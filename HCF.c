//WRITE A FUNCTION TO COMPUTE THE GREATEST COMMON DIVISOR OF TWO GIVEN NUMBERS//
// GCD=HCF(HIGHEST COMMON FACTOR)
//   24- 1,2,3,4,,6,8,12,24
//    60-1,2,3,4,5,6,10,12,15,20,30,60//
#include<stdio.h>
int min(int a, int b){
    if(a<b) 
    {return a;}
    else 
    {return b;}
}
int gcd(int a ,int b){int hcf=0,i;
    for( i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
    
}
int main(){
    int a,hcf=0;
    printf("enter 1st number\n");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number\n");
    scanf("%d",&b);
    hcf=gcd(a,b);
     printf("the gcd of %d and %d is: %d ",a,b,hcf);
     return 0;
   

}