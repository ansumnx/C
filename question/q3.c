#include<stdio.h>
int table(int num){
   for(int i=1;i<=10;i++){
        int result = num*i;
        printf("%dX%d=%d\n",num,i,result);
   }
}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    table(num);
    return 0;
    
}