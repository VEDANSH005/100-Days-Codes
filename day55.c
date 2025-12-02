#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Step 1: Find a candidate using Boyer-Moore Voting
    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else {
            if (nums[i] == candidate)
                count++;
            else
                count--;
        }
    }

    // Step 2: Verify if candidate is majority
    count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;

    if (count > n / 2)
        printf("Output:\n%d\n", candidate);
    else
        printf("Output:\n-1\n");

    return 0;
}
