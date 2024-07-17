#include<stdio.h>
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        printf("%d\n",i);
        i++;
    }
}