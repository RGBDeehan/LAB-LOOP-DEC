#include <stdio.h>
int main(){
int x,i,d;

printf("Enter number for m table");
scanf("%d",&x);
d=1;
for(i=1;i<=10;i++){
    d=x*i;
    printf("%d*%d=%d\n",x,i,d);
    }





return 0;
}
