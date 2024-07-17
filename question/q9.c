#include<stdio.h>
int main(){
    int first;
    printf("enter the first number\n");
    scanf("%d",&first);
    int sec;
    printf("enter sec number\n");
    scanf("%d",&sec);
    int sum=0;
    while(first<=sec){
    sum = sum + first;
        first++;
    }
    printf("%d",sum);
}