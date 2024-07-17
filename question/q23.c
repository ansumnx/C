#include<stdio.h>
#include<string.h>
int main(){
    char sen[20];
    puts("enter the sentence\n");
    gets(sen);
    strrev(sen);
    printf("%s",sen);
}