#include <stdio.h>
void name(long a[5])
{
    printf("your top five number\n");
    for (long  i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    long a[5];
    printf("enter five number\n");
    for (long i = 0; i < 5; i++)
    {
        scanf("%u",&a[i]);
    }
    name(a);
    return 0;
}    