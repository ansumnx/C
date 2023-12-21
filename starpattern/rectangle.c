#include<stdio.h>
int main()
{
    int row;
    printf("enter the number of row\n");
    scanf("%d",&row);
    for(int a=1;a<=row;a++)
    {
        for(int b=1;b<=row;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}