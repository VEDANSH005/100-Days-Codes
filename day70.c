#include <stdio.h>
#include <ctype.h>  // for toupper() and tolower()
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  // take full line as input

    int new_word = 1;  // flag to track start of word

    for (int i = 0; str[i] != '\0'; i++) {
        if (new_word && str[i] != ' ') {
            str[i] = toupper(str[i]);   // capitalize first letter
            new_word = 0;
        } else if (str[i] == ' ') {
            new_word = 1;  // next character will start a new word
        } else {
            str[i] = tolower(str[i]);   // make rest of letters lowercase
        }
    }

    printf("%s", str);
    return 0;
}
