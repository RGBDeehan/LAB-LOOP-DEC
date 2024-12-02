#include <stdio.h>
int main(){
int x,y,p,s;
printf("Enter the number");
scanf("%d",&x);


while(x!=0){
    p=x%10;
    x=x/10;
    s=s+p;
}
printf("Digit Sum: %d\n",s);




return 0;
}
