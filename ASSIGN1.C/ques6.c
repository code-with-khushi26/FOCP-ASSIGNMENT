#include<stdio.h>
int main()
{
int x,y;
    printf("Enter x coordinate: ");
    scanf("%d", &x);
     printf("Enter y coordinate: ");
    scanf("%d", &y);
    if(x==0&&y==0) printf("origin");
    else if(x>0&&y>0) printf("I QUADRANT");
    else if(x<0 &&y>0) printf("II QUADRANT");
    else if(x<0&&y<0) printf("III QUADRANT");
    else if(x>0&&y<0) printf("IV QUADRANT");
    else if (y == 0) printf("Point lies on the X-axis\n");
    else if (x == 0) printf("Point lies on the Y-axis\n");
    else printf("does not lie in any quadrant");
return 0;
}