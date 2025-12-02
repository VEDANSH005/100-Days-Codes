#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int answer[n];

    // Step 1: Calculate prefix products
    int prefix[n];
    prefix[0] = 1; // no elements before index 0
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] * nums[i-1];

    // Step 2: Calculate suffix products and multiply with prefix
    int suffix = 1;
    for (int i = n-1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    // Step 3: Print output array in [a,b,c,...] format
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i != n-1)
            printf("%d,", answer[i]);
        else
            printf("%d", answer[i]);
    }
    printf("]\n");

    return 0;
}
