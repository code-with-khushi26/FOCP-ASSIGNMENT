#include<stdio.h>
int main()
{
int i; 
printf("enter size of array");
scanf("%d",&i);
int marks[i];
for(int j=0;j<i;j++){
    printf("enter the marks for student %d  ",(j+1));
    scanf("%d",&marks[j]);
}
int sum=0;

for (int j=0;j<i;j++){
sum+=marks[j];
}
printf("the sum of array is %d",sum);
return 0;
}