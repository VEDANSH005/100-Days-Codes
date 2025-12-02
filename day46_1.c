#include <stdio.h>

int main() {
    int num;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        printf("Do you want to enter another number? (y/n): ");
        // Note the space before %c to consume any leftover newline character
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\n--- Summary ---\n");
    printf("Count of positive numbers: %d\n", positive_count);
    printf("Count of negative numbers: %d\n", negative_count);
    printf("Count of zeros: %d\n", zero_count);

    return 0;
}
