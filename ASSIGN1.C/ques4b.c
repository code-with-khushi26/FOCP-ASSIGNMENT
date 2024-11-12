#include<stdio.h>
int main()
{
int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
     printf("Enter second number: ");
    scanf("%d", &b);

    printf("BEFORE SWAPING: a=%d and b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("AFTER SWAPING: a=%d and b=%d",a,b);

return 0;
}