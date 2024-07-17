#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *hello;
    hello=fopen("hello.txt","a");
    fprintf(hello,"\ni am 23 years old");
    fclose(hello);
}