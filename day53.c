#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += nums[i];

    int leftSum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            pivot = i;
            break; // leftmost pivot
        }

        leftSum += nums[i];
    }

    printf("Output:\n%d\n", pivot);
    return 0;
}
