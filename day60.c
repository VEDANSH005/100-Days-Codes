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

    // Brute-force: find maximum in each window of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d", max);
        if (i != n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
