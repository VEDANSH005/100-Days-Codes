#include <stdio.h>

int main() {
    int n, target;
    int nums[100];

    // Input array size
    scanf("%d", &n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    scanf("%d", &target);

    // Find two indices such that nums[i] + nums[j] == target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                return 0;  // Exit after finding one solution
            }
        }
    }

    // If no pair found
    printf("-1 -1");
    return 0;
}
