#include <stdio.h>
int main() {
char str [ 100];
int i = 0;
printf("Enter a string: ");
fgets (str, sizeof(str), stdin);
while (str[i] != '10'){
    if (str[i] >= 'a' && str[i] <= 'z'){
        str[i]= str[i] - 32; // convert lowercase to uppercase
    }
    i++;
}
printf ("%s", str);
return 0;
}