
#include<stdio.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
}pokemon;
void change(pokemon *p)
{
    p->attack=233;
    p->hp=2111;
    p->speed=333;
    // or
    (*p).attack=233;
   (*p).hp=2111;
    (*p).speed=333;

}
int main()
{
    pokemon pikachu;
    pokemon* x=&pikachu;
    pikachu.attack=12;
    pikachu.hp=13;
    pikachu.speed=16;
    change(x);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%d\n",pikachu.attack);

}