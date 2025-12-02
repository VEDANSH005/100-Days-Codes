#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k:\n");
    scanf("%d", &k);

    if (k > n) {
        printf("Window size k cannot be greater than array size.\n");
        return 0;
    }

    // Loop over each window of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0; // default if no negative number found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break; // first negative found
            }
        }
        printf("%d", firstNeg);
        if (i != n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
