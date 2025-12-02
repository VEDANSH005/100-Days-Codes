#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of subarray k:\n");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    // Step 1: Compute sum of first window of size k
    int maxSum = 0, windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i]; // remove first element, add new element
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("Output:\n%d\n", maxSum);

    return 0;
}
