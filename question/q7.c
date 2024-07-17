#include<stdio.h>
int factorial(int num){
    int fact=0;
    for(int i=1;i<=num;i++){
        fact=i*num;
    }
    printf("%d is factorial",fact);

}
int main(){
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    factorial(num);
    return 0;
}