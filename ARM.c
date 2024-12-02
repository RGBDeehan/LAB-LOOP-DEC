#include <stdio.h>
#include <math.h>
int main(){
int y,x,p,s;
printf("Enter the number");
scanf("%d",&x);
y=x;
while(x!=0){
    p=x%10;
    x=x/10;
    s=s+(p*p*p);

}
if ( s==y ){
    printf("Armstrong");

}
else{
    printf("NOT Armstrong");

}
return 0;
}
