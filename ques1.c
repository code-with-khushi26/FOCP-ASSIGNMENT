#include<stdio.h>
int main()
{
int arr[5];
for(int i=0;i<5;i++){
    printf("enter the marks for student %d  ",(i+1));
    scanf("%d",&arr[i]);
}

// to update marks upto 5//

for(int i=0;i<5;i++){
arr[i]+=5;
}

for(int i=0;i<5;i++){
    printf("marks for student %d\n",arr[i]);
}
   

return 0;
}