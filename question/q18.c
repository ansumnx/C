#include<stdio.h>
int main(){
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    int sum[size];
    printf("enter the number\n");
    for(int i=0;i<size;i++){
        scanf("%d",&sum[i]);
    }
    int total=0;
    for(int i=0;i<size;i++){
        total+=sum[i];
    }
    printf("%d",total);
}