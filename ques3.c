#include<stdio.h>
int main()
{
int arr[5];

for(int i=0;i<5;i++){
    printf("enter the marks for student %d  ",(i+1));
    scanf("%d",&arr[i]);
}

for(int i=0;i<5;i++){
    if(arr[i]==99){
        printf("the first person to score 99 is at %d index",i);
        break;
    }
    
}
printf("No student scored 99.");
return 0;
}