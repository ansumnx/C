// void fun
#include <stdio.h>
void name()
{
    printf("yes i am in\n");
}
void hel()
{
    printf("no you are not\n");
}
void fun()
{
    printf("im the boss and you are in");
}
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        name();
    }
    hel();
    fun();
}