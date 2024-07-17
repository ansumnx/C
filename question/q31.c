#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *hello;
    hello = fopen("hello.txt","r");
    char data[100];
    if(hello != NULL){
        while(fgets(data,100,hello)){
            printf("%s",data);
        }
    }
    else
    {
        printf("ERROR!");
    }
    fclose(hello);
}