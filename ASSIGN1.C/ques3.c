#include<stdio.h>
int main()
{
int a,b;
printf("enter first no");
scanf("%d",&a);
printf("enter second no");
scanf("%d",&b);
while (b != 0) {
 int borrow = (~a) & b;
 a = a ^ b;
 b = borrow << 1;
 }
 printf("Result: %d\n", a);
 return 0;
}
