#include<stdio.h>
void arms(int num){
    int temp,cube,sum=0,r;
    temp=num;
    while(num>0){
        r=num%10;
        cube=1;
        for(int i=1;i<=r;i++){
            cube=i*i*i;
        }
        sum+=cube;
        num/=10;
    }
    if(temp==sum)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}


int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    arms(num);
    return 0;
}