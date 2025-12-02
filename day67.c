#include <stdio.h>

int main() {
    int m, n;
    int nums1[100], nums2[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Input sizes of both arrays
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    // Reset indices for merging
    i = j = k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements (if any)
    while (i < m)
        merged[k++] = nums1[i++];
    while (j < n)
        merged[k++] = nums2[j++];

    // Print merged sorted array
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    return 0;
}
