#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string:\n");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // For ASCII characters
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < n; i++) {
        // If character repeats inside current window
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i;

        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
