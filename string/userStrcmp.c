#include <stdio.h>
#include <string.h>
int main()
{
    int l1, l2, i = 0, t = 0;
    char s[20], a[20];
    printf("input the strings\n");
    fgets(s, 20, stdin);
    fgets(a, 20, stdin);
    l1 = strlen(s);
    l2 = strlen(a);
    if (l1 != l2)
    {
        printf("not similar");
    }
    else
    {
        t = 0;

        while (s[i] != a[i])
        {
            t++;
            break;
            i++;
        }
    }
    if (t == 0)
    {
        printf(" similar");
    }
    else
    {
        printf("not similar");
    }
    return 0;
}
