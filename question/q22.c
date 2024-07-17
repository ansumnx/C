#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    puts("enter the sentence");
    gets(sen);
   int lenght=0,i=0;
   while (sen[i] != '\0'){
    lenght++;
    i++;
   }
    printf("%d",lenght);
    return 0;
}