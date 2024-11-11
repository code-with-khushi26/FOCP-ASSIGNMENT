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

for(int j=0;j<i;j++){
    if(marks[j]%2==0) printf("marks of %d index student is EVEN\n",j);
    else printf("marks of %d index student is odd\n",j);
}
return 0;
}