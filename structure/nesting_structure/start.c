#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
} pokemon ;
typedef struct legendarypokemon{
    pokemon normal;
    char ability[10];
} legendarypokemon;
int main()
{
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability,"pressure");
    mewtwo.normal.hp=200;
    mewtwo.normal.attack=211;
}