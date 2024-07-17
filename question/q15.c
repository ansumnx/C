#include <stdio.h>
void reverse(int num)
{
    int rev = 0, r;
    while (num > 0)
    {
        r = num % 10;
        rev = rev*10 + r;
        num /= 10;
    }
    printf("%d", rev);
}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    reverse(num);
    return 0;
}