#include <stdio.h>
int main() {
int a=1, d, num, hasodd=0, product=1;
printf ("Enter a number"); 
scanf ("%d",&num);
while (num!= 0){
    d=num%10;
    if(d%2==1){
        a=a*d;
    }
    num=num/10; 
    hasodd=1;
    }
    if(!hasodd){
        product=1;
    }
printf ("Product of odd numbers : %d",a );
return 0;
}

