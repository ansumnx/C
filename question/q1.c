#include <stdio.h>
int main()
{
    char name[20];
    int age;
    float height;
    printf("enter your name\n");
    scanf("%s", name);
    printf("enter your age\n");
    scanf("%d", &age);
    printf("enter your height \n");
    scanf("%f", &height);
    printf("your information:\n");
    printf("Your name is %s, you are %d years old and your height is %.1f", name, age, height);
}