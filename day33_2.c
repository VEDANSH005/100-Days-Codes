#include <stdio.h>
int main () {
int a[50], n, i, num, pos;
printf ("Enter the size of the array: \n");
scanf ("%d", &n);
printf("Enter the elements in array: \n");
for (i = 0; i < n; i++){
    printf ("a[%d]",i);
    scanf ("%d", &a[i]);
}
printf ("Enter the number to be inserted: \n");
scanf ("%d", &num) ;
pos = n;
for (i = 0; i < n; i++){
    if (a[i] > num){
        pos = i;
        break;
    }
}
for (i = n; i > pos; i--){
    a[i] = a[i - 1];
}
a[pos] = num;
n++;
for (i = 0; i < n; i++){
    printf("%d ", a[i]);
}
printf("\n");
return 0;
}