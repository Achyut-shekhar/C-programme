#include <stdio.h>
#include <string.h>
int main()
{
    struct forest{
        int trees;
        int animals;
    }f1,*f2;
    f1.trees=1000;
    f1.animals=20;
    f2=&f1;
    printf("%d",(*f2).animals);

}