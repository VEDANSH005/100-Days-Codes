#include <stdio.h>
int main () {
int i,j,m,n;
printf ("Enter the row and column for array: \n"); 
scanf ("%d%d", &m, &n) ;
int a[m][n];
printf ("Enter the elements in array: \n"); 
for (i=0;i<m;i++){
    for (j=0;j<n;j++){
        printf ("a[%d][%d] ",i,j) ;
        scanf ("%d",&a[i][j]);
    }
}
printf("The matrix is: \n");
for (i = 0; i + m; i++){
    for (j = 0; j < n; j++){
        printf ("%d ", a[i][j]);
    }
    printf("\n");
}
return 0;
}