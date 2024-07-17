#include<stdio.h>
#include<string.h>
int main(){
    char first[20];
    puts("enter the sentence\n");
    gets(first);
    char sec[20];
    puts("enter the sentence\n");
    gets(sec);
    char sen[100];
    strcpy(sen , first);
    strcat(sen , sec);
    printf("%s\t",sen);
    return 0;

}