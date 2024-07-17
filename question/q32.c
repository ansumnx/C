// coping one file into another
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *hello, *data;
    hello = fopen("hello.txt", "r");
    data = fopen("data.txt", "w");
    char newdata[100];
    if (hello != NULL)
    {
        while (fgets(newdata, 100, hello))
        {
            fputs(newdata, data);
        }
    }
    else
    {
        printf("ERROR!");
    }
    printf("copied");

    fclose(hello);
    fclose(data);
}
