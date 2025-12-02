#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening file in read mode
    fp = fopen(filename, "r");

    // If file doesn't exist
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // If file exists
    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and display file content character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
