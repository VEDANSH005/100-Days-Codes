#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];      // Initialize with first element
    int currentSum = arr[0];  // Current subarray sum

    for (int i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = arr[i];  // Start new subarray
        else
            currentSum += arr[i]; // Extend current subarray

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Output:\n%d\n", maxSum);

    return 0;
}
