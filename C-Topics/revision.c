#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("him.txt","w");
    fprintf(fptr,"hii how are you");
    fclose(fptr);

}