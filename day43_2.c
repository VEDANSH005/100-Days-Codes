#include <stdio.h>
#include <ctype.h>// for tolower()
int main() {
    char str[200], cleaned[200];
    int i = 0, j = 0, len = 0, isPalindrome = 1;
    printf("Enter a string: ");
    fgets (str, sizeof(str), stdin);
    // clean string: keep only letters and convert to lowercase
    while (str[i] !="\0"){
        if ((str[i] >='A' && str[i]<='Z') || (str[i]>= 'a' && str[i] <='z')){
            cleaned[j++] = tolower(str[i]);
        }
        i++;
    }
    cleaned[j] = '10'; //terminate cleaned string
    len = j;
    // check palindrome
    for (i = 0; 1 < len / 2; i++) {
        if (cleaned[i]!= cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    return 0;
}
