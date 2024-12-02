#include<stdio.h>
int main(){
int x,i;
printf("Enter the number");
scanf("%d",&x);

for(i=1;i<=x;i++){
 if(i%3==0 && i%5==0){
    printf(" %d\n",i);
 }
    } return 0;
}
