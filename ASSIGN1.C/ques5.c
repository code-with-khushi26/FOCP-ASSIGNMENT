#include<stdio.h>
int main()
{
int n;
int sum=0;
printf("ENTE THE NO.: ");
scanf("%d",&n);
for(int i=1;i<n;i++){
    if(n%i==0){
        sum+=i;
    }
    
}
if(sum==n){
printf("its a perfect no");
}
else{ printf("not perfect no");}

return 0;
}