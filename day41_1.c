#include<stdio.h>
int main() {
char str [100];
int count = 0;
printf ("Enter a string: "); 
fgets (str, sizeof(str), stdin);
//count characters one by one until '\0'
while (str[count] != '\0') {
count++;
}
//read input including spaces
//fgets stores 'In' before '10' when Enter is pressed
if (count > 0 && str[count - 1] == "\n") {
count--;
}
// exclude newline from length
printf("%d\n", count) ;
return 0;
}