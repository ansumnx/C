#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *hello;
    hello = fopen("hello.txt","w");
    fprintf(hello ,"i am anshuman");
    fclose(hello);

}