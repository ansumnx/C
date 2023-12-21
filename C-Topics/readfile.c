#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("him.txt", "r");
    char a[100];
    fgets(a, 100, fptr);
    printf("%s", a);
    fclose(fptr);
    return 0;
}