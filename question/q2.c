#include<stdio.h>
int solver(int first, int second){
    if(first==0 || second==0){
        return 0;
    }
    return first/second;
}

int main(){
    int first , second;
    printf("enter fist number\n");
    scanf("%d",&first);
    printf("enter second number\n");
    scanf("%d",&second);
    int result = solver(first , second);
    printf("div is %d",result);
}
