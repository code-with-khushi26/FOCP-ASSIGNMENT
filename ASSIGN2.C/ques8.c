#include<stdio.h>
int main()
{
int size; 
printf("enter size of array");
scanf("%d",&size);
int marks[size];
for(int j=0;j<size;j++){
    printf("enter the marks for student %d  ",(j+1));
    scanf("%d",&marks[j]);
}

int max = marks[0];
    int min = marks[0];

    for (int i = 1; i < size; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

return 0;
}