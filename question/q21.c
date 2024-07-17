#include<stdio.h>
#include<string.h>
int main(){
    char sen[100];
    puts("enter the sentence");
    gets(sen);
    int len = strlen(sen);
    // while(sen[i] != '\0'){
    //     lenght++;
    //     i++;
    // }
    printf("%d",len);
    return 0;
}