#include<stdio.h>
int main(){
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    int num[size];
    printf("enter the numbers\t");
    for(int i=0;i<size;i++){
        scanf("%d",&num[i]);
    }
    int largest=num[0];
    int smallest = num[1];
    for(int i=0;i<size;i++){
        if(largest<num[i]){
            largest=num[i];
        }
        if(smallest>num[i]){
            smallest=num[i];
        }
    }
    // printf("%d",largest);
    printf("%d is smallest\n %d is largest\n",smallest,largest);
}