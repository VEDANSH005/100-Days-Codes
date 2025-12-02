#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k:\n");
    scanf("%d", &k);

    // Simple Bubble Sort to sort the array
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // kth smallest element is at index k-1 after sorting
    if (k >= 1 && k <= n)
        printf("Output:\n%d\n", arr[k-1]);
    else
        printf("Invalid k\n");

    return 0;
}
