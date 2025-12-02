#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output file for writing
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(fin);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);      // convert lowercase to uppercase
        fputc(ch, fout);
    }

    printf("File converted successfully. Output saved to output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
