#include <stdio.h>
int main(){
int i,j,m, n, sumofrows [50], a [50][ 50]; 
printf ("Enter the row and column for array: \n"); 
scanf ("%d %d",&m,&n) ;
printf ("Enter the elements in array: \n"); 
for (i=0;i<m;i++){
    for (j=0;j<n;j++){
        scanf ("%d",&a[i][j]);  
    }
}
for (i=0;i<m; i++) {
    sumofrows [i] = 0;
    for (j=0;j<n;j++){
        sumofrows [i] = sumofrows [i] + a[i][j];
    }
}
printf ("Sum of rows of matrix : \n");
for (i=0;i<m;i++){
    printf ("%d ", sumofrows [i]);
}
return 0;
}