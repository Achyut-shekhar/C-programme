// in this we saw that not like array structure does not change the value in  main from the user function like array in array if we send an array to user function and make changes in array there then in main function also changes take place but this is not the case in structure therefore this is pass by value example
#include<stdio.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
}pokemon;
void change(pokemon p)
{
    p.attack=233;
    p.hp=2111;
    p.speed=333;
}
int main()
{
    pokemon pikachu;
    pikachu.attack=12;
    pikachu.hp=13;
    pikachu.speed=16;
    change(pikachu);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);

}