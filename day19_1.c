#include <stdio.h>
int main () {
int num1, num2, Icm;
printf ("Enter two numbers:");
scanf ("%d %d", &num1, &num2) ;
Icm = (num1 > num2) ? num1 : num2;
while (1){
    if (Icm % num1==0 && Icm % num2==0) {
        printf("%d\n", Icm);
        break;
        Icm++;
    }
}
return 0;
}