#include<stdio.h>
int main() {
int s,x,i;
printf("Enter the number for factorial");
scanf("%d",&x);
s=1;
for(i=1;i<=x;i++){
    s=s*i;
}
printf("Factorial is: %d\n",s);
return 0;
}
