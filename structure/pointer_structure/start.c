#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;
int main()
{   
    pokemon pickachu;
    pickachu.hp=60;
    pickachu.attack=30;
    pickachu.speed=10;
    pickachu.tier='a';
    strcpy(pickachu.name,"pickachu");
    pokemon* x = &pickachu;
    printf("%p\n",&pickachu.hp);
    
    printf("%p",x);

}