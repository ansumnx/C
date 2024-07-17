#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first digit: ");
    scanf("%d",&a);
    printf("enter the second digit: ");
    scanf("%d",&b);
    printf("befor swap\n");
    printf("A=%d B=%d\n",a,b);
    printf("A=%p B=%p\n",(void*)&a,(void*)&b);
    printf("after swap\n");
    int temp=a;
    a=b;
    b=temp;
    printf("A=%d B=%d\n",a,b);
    printf("A=%p B=%p",(void*)&a,(void*)&b);
    
}