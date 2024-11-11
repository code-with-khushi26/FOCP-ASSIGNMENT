#include<stdio.h>
int main()
{
int arr[5];

for(int i=0;i<5;i++){
    printf("enter the marks for student %d  ",(i+1));
    scanf("%d",&arr[i]);
}
int count=0;
for(int i=0;i<5;i++){
    if(arr[i]==99){
        count+=1;
           printf("%d index scored 99\n",i);
    }
    
}
printf("total %d student(s) scored 99",count);

return 0;
}