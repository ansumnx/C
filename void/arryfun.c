#include<stdio.h>


void abhi(int b[2])
{
    for(int i=0;i<2;i++)
    {
        printf("%d\n",b[i]);
    }
}

int main()
{
     int b[2]={10,20};
    abhi(b);

}