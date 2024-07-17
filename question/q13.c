#include<stdio.h>
void fabinosis(int num){
    int a=0,b=1;
    while(num>0){
        int temp=a+b;
        printf("%d\t",temp);
        a=b;
        b=temp;
        num--;
    }
}



int main(){
    int num;
    printf("enter num\n");
    scanf("%d",&num);
    fabinosis(num);
    return 0;
}