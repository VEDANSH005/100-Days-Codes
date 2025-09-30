#include <stdio.h>
int main() {
long binary, onesComplement = 0;
int place = 1, digit;
printf("Enter a binary number: ");
scanf ("%ld", &binary) ;
while (binary != 0) {
digit = binary % 10;
if (digit == 0)
onesComplement += 1 * place; 
else
onesComplement += 0 * place;
binary /= 10;
place *= 10;
}
printf("1's Complement: %ld\n", onesComplement);
return 0;
}