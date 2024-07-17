#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    puts("enter the name\n");
    gets(name);
    int i=0;
    while(name[i] != '\0'){
        printf("%c",name[i]);
        i++;
    }
}