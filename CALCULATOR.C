#include<stdio.h>
#include<conio.h>
#include<math.h>

    void Addition(){
    int a,b;
    printf("ENTER FIRST NO: ");
    scanf("%d",&a);
    printf("ENTER SECOND NO: ");
    scanf("%d",&b);
    printf("%d",a+b);
    }

    void subtraction(){
    int a,b;
    printf("ENTER FIRST NO: ");
    scanf("%d",&a);
    printf("ENTER SECOND NO: ");
    scanf("%d",&b);
    if(a>b) printf("%d",a-b);
    else printf("%d",b-a);
    }

    void Multiplication(){
    int a,b;
    printf("ENTER FIRST NO: ");
    scanf("%d",&a);
    printf("ENTER SECOND NO: ");
    scanf("%d",&b);
    printf("%d",a*b);
    }

    void Division(){
    int a,b;
    printf("ENTER FIRST NO: ");
    scanf("%d",&a);
    printf("ENTER SECOND NO: ");
    scanf("%d",&b);
    if(a>b) printf("%d",a/b);
    if(b>a) printf("%d",b/a);
   
    }

    void Log(){
    double a;
    printf("Enter a number to find the logarithm (base e): ");
    scanf("%lf", &a);
    if (a > 0)
        printf("%lf", log(a));
    else
        printf("Error! Logarithm of non-positive numbers is not defined.\n");}

    void Squareroot() {
    double a;
    printf("Enter a number to find the square root: ");
    scanf("%lf", &a);
    if (a >= 0)
        printf("%lf", sqrt(a));
    else
        printf("Error! Square root of a negative number is not defined.\n");}


int main()
{
printf("~WELCOME TO SIMPLE CALCULATOR~\nIt can perform\n1)Addition\n2)subtraction\n3)Multiplication\n4)Division\n5)Logarithmic values\n6)Square roots\n");
printf("ENTER YOUR CHOICE:");
int choice;
scanf("%d",&choice);
switch(choice){
    case 1:
    Addition();
    break;

    case 2:
    subtraction();
    break;

    case 3:
    Multiplication();
    break;

    case 4:
    Division();
    break;

    case 5:
    Log();
    break;

    case 6:
    Squareroot();
    break;
    
    default:
    printf("ENTER WRONG CHOICE");
    break;
    
}

return 0;
}