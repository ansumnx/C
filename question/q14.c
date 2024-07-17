#include<stdio.h>
void prime(int a){
    int prime=0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        {
            prime++;
        }
    }
    if(prime==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }

}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}