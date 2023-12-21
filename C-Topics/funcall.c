#include<stdio.h>
//function declaration
float div(float,float);

//function calling
int main()
{
    float a,b;
    printf("enter two digit\n");
    scanf("%f %f",&a,&b);
    printf("%.1f",div(a,b));
    return 0;
}

//functin defination
float div(float a,float b)
{
    return a/b;
}