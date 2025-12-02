#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pge[n]; // to store previous greater elements

    // Brute-force nested loop
    for (int i = 0; i < n; i++) {
        pge[i] = -1; // default if no previous greater exists
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break; // nearest greater element on the left found
            }
        }
    }

    // Print output in comma separated format
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d, ", pge[i]);
        else
            printf("%d", pge[i]);
    }
    printf("\n");

    return 0;
}
