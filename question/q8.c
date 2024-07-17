#include<stdio.h>
int sum(int num){
    int r,result=0;
    while(num>0){
      r=num%10;
      result += r;
      num /= 10;
    }
    printf("%d",result);
}

int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    sum(num);
    return 0;
}