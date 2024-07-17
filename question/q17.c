#include<stdio.h>
int main(){
    int size;
    printf("enter the size");
    scanf("%d",&size);
    int element[size];
    printf("enter the element\n");
    for(int i=0;i<size;i++){
        scanf("%d",&element[i]);
    }
    printf("please conform your element\n");
    for(int i=0;i<size;i++){
        printf("%d\t",element[i]);
    }
}