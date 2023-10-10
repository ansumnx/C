#include <stdio.h>
struct student
{
    char name[10];
    int num;
};

int main()
{
    struct student s1;

    s1.name;
    printf("enter your name\n");
    gets(s1.name);
    s1.num;
    printf("enter your age\n");
    scanf("%d", &s1.num);

    printf("your name is %s\n", s1.name);
    printf("your age is %d", s1.num);
}
