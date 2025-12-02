#include <stdio.h>
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;   // possible first occurrence
            high = mid - 1; // search in left half
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            result = mid;   // possible last occurrence
            low = mid + 1;  // search in right half
        } else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements (sorted array):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target:\n");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    // Add 1 to convert 0-based index to 1-based index
    if (first != -1 && last != -1)
        printf("Output:\n%d,%d\n", first + 1, last + 1);
    else
        printf("Output:\n-1,-1\n");

    return 0;
}
