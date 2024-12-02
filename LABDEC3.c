#include <stdio.h>
int main(){
int x,s,i,z,m;

printf("Enter how much person");
scanf("%d",&x);

s=0;m=0;
for(i=1;i<=x;i++){

   printf("Enter the age");
scanf("%d",&z);
 s=s+z;

}
if(z>m){
    m=z; printf("Highest age : %d\n",m);
}
printf("Average age is: %d\n",s/x);

return 0;
}
