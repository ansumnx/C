#include<stdio.h>
int perfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("perfect\n");
    }
    else{
        printf("not perfect");
    }

}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    perfect(num);
    return 0;

}