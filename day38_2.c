#include <stdio.h>
int main() {
int n, m, i, j;
int A[50][50];
int issymmetric = 1;
printf ("Enter row and column of matrix: \n");
scanf ("%d %d", &n, &m);
if (n!= m){
    printf("False\n");
    return 0;
}
printf ("Enter the elements: \n");
for (i = 0; i < n; i++){    
    for (j = 0; j < m; j++){
        printf ("a[%d][%d] ",i,j);
        scanf ("%d", &A[i][j]);
    }
}
for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
        if (A[i][j] != A[j][i]){
            issymmetric = 0;
            break;
        }
    }
    if (!issymmetric) break;
}
if (issymmetric){
    printf( "True\n");
}
else{
    printf("False\n");
}
return 0;
}