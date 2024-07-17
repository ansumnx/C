#include<stdio.h>
void palindrom(int num){
   int temp,r,store=0;
   temp=num;
   while(num>0){
    r=num%10;
    store=store*10+r;
    num/=10;
   } 
   if(temp==store){
    printf("palindrom");
    
   }
   else{
    printf("not palindrom");
   }
}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    palindrom(num);
    return 0;

}