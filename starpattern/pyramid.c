#include<stdio.h>
int main()
{
    int row;
    printf("enter the row\n");
    scanf("%d",&row);
    for(int a=1;a<=row;a++)
    {
        for(int b=1;b<=row-a;b++)
        {
            printf(" ");
        }
        for(int c=1;c<=2*a-1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}