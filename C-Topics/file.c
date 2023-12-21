#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("hel.txt","r");
    char string[50];
    fgets(string,50,fptr);
    printf("%s",string);
    fclose(fptr);
}