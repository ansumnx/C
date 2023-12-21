#include<stdio.h>
struct student
{
    char name[50];
    int age;
    float height;
};

int main()
{
    struct student s;
    s.name;
    {
        printf("enter name\n");
        scanf("%s",&s.name);
    }
    s.age;
    {
        printf("enter age\n");
        scanf("%d",&s.age);
    }
    s.height;
    {
        printf("enter height\n");
        scanf("%f",&s.height);
    }

    printf("information about student\nName-%s\nAge-%d\nHeight-%.2f",s.name,s.age,s.height);
    return 0;
}


