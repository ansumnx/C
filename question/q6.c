#include<stdio.h>
int find(int a){
    for(int i=1;i<=a;i++){

    if(i%2==0){
        printf(" %d is even\n",i);
    }
    else{
        printf(" %d is odd\n",i);
    }
    }
}
int main(){
    int num;
    printf("enter your number\n");
    scanf("%d",&num);
    find(num);
    return 0;
}