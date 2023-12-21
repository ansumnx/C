#include <stdio.h>
int main()
{
    int row;
    printf("enter the row");
    scanf("%d", &row);
    for (int a = 1; a <= row; a++)
    {
        for (int b = 1; b < a; b++)
        {
            printf(" ");
        }
        for (int c = row; c >= a; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}