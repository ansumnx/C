#include<stdio.h>
int factorial(int a)
{   
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("the factorial is %d",factorial(a));
}



