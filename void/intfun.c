/*#include<stdio.h>
int multi(int a,int b)
{
    int c=a*b;
    return c;
}

int main()
{
    int a,b;
    printf("two digit\n");
    scanf("%d %d",&a,&b);
    //int c=multi(a,b);
    printf("%d",multi(a,b));
    return 0;
}*/


#include<stdio.h>
float div(float a,float b)
{
    return a/b;
}

int main()
{
    float a,b;
    printf("enter two number\n");
    scanf("%f %f",&a,&b);
    printf("result is %.2f",div(a,b));
    return 0;
}