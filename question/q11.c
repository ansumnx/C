#include<stdio.h>
int strong(int num)
{
    int temp,r,fact=1,sum=0;
    temp=num;
    while(num>0){
        r=num%10;
        fact=1;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        } 
        sum+=fact;
        num=num/10;
    }
    if(temp==sum){
        printf("strong number");
    }
    else{
        printf("not strong");
    }
}



int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    strong(num);
    return 0;
}