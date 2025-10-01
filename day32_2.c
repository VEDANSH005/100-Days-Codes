#include<stdio.h>
int main () {
long long num;
int freq[10] = {0}; // frequency array for digits 0-9
int digit, i, maxFreq = 0, mostFrequent = 0;
// Input number
printf("Enter an integer number: ");
scanf ("%11d", &num);
// Count digit frequencies
while (num > 0) {
    digit = num % 10;   // extract last digit
    freq[digit]++;      // increase count for this digit
    num /= 10;          // remove last digit
}
//Find the digit with maximum frequency
for (i = 0; i < 10; i++) {
    if (freq[i] > maxFreq) {
        maxFreq = freq[i];
        mostFrequent = i;
    }
}
// Output result
printf("Digit that occurs most times: %d\n", mostFrequent);
return 0;
}