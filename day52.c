#include <stdio.h>
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;      // possible ceil
            high = mid - 1;    // check left side for first occurrence
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x:\n");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("Output:\n%d\n", index);

    return 0;
}
