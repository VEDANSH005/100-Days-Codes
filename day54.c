#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n:\n");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // sum of 1 to n
    int leftSum = 0;
    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        leftSum += x;             // sum of 1 to x
        int rightSum = totalSum - (leftSum - x); // sum from x to n

        if (leftSum == rightSum) {
            pivot = x;
            break; // found the pivot
        }
    }

    printf("Output:\n%d\n", pivot);
    return 0;
}
