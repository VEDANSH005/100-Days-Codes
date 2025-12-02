#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int nge[n]; // to store next greater elements

    // Brute-force nested loop
    for (int i = 0; i < n; i++) {
        nge[i] = -1; // default if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; // nearest greater element found
            }
        }
    }

    // Print output in comma separated format
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d, ", nge[i]);
        else
            printf("%d", nge[i]);
    }
    printf("\n");

    return 0;
}
