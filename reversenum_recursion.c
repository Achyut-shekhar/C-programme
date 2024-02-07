#include <stdio.h>

 static int sum = 0, rem;

int revNumFunc(int num)
{
    if (num==0)
    {
       return sum;
    }
    else
      {   rem = num % 10;
        sum = sum * 10 + rem;
        revNumFunc(num / 10);
      } 
}
int main()
{
    int num, res;
    printf("input num");
    scanf("%d", &num);
    res = revNumFunc(num);
    printf("%d", res);

    return 0;
}
