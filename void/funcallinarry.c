// funcall in arry
#include <stdio.h>
/*int school(char schoolname[5], int schoolpostion[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("schoolname %s\n", schoolname);
        printf("school position %d ", schoolpostion);
    }
    return 0;
}*/

int main()
{
    int schoolposition[5];
    char schoolname[100];
    printf("enter school name then enter school positin\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&schoolposition[i]);
    }
    for (int i = 0; i < schoolname; i++)
    {
        scanf("%s",&schoolname[i]);
    }    
  for (int i = 0; i < 5; i++)
    {
        printf(" school name %s school position %d",schoolname[i],schoolposition[i]);
    }
    return 0;
}