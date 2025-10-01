#include <stdio.h>
int main() { 
int n, k;
printf ("Enter the size of the array: \n");
scanf ("%d", &n) ;
int arr[n];
printf ("Enter the elements in array: \n");
for (int i = 0; i < n; i++){
    printf ("a[%d] ",i);
    scanf ("%d", &arr[i]);
}
printf ("Enter number of rotations: \n");
scanf ("%d", &k);
k = k % n;
for (int i = n - k; i < n; i++){
    printf ("%d ", arr[i]);
}
for (int i = 0; i < n - k; i++){
    printf("%d ", arr[i]);
}
return 0;
}
