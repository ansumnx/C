#include<stdio.h>
int main()
{
    int row;
    printf("enter row");
    scanf("%d",&row);
    for(int a=1;a<=row;a++)
    {
        for(int b=row;b>a;b--)
        {
           printf(" ");
        }
        for(int c=1;c<=a;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}