#include<stdio.h>
int main()
{
int marks[5];
for(int i=0;i<5;i++){
    printf("enter the marks for student %d  ",(i+1));
    scanf("%d",&marks[i]);
}

for(int i=0;i<5;i++){
if(marks[i]>=75){ printf("THE GRADE OF STUDENT %d IS A\n",i);}
else if(marks[i]>=60){ printf("THE GRADE OF STUDENT %d IS B\n",i); }
else if(marks[i]>=40){ printf("THE GRADE OF STUDENT %d IS C\n",i); }
else if(marks[i]<40){ printf("THE GRADE OF STUDENT %d IS D\n",i); }
}



return 0;
}