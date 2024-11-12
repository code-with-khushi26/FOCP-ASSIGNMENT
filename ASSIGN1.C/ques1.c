#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("eneter a no.: ");
scanf("%d",&n);
int last_dig;
int original=n;
int count=0;
int armstrg;
int sum=0;

while(n!=0){
    last_dig=n%10;
    count+=1;
    n=n/10;
}
printf("%d\n",count);
n=original;

while(n!=0){
    last_dig=n%10;
    armstrg=pow(last_dig,count);
    sum+=armstrg;
    n=n/10;

}

printf("%d ",sum);

if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }







return 0;
}