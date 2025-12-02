#include<stdio.h>
int main (){
int i,j, r1, c1, r2, c2, a[50][50],b[50][50], result[50][50];
printf ("Enter the rows and columns for matrix 1: \n"); 
scanf ("%d %d",&r1,&c1);
printf ("Enter the elements for matrix 1: \n"); 
for (i=0; i<r1; i++){
    for ( j=0; j<1 ; j++ ){ 
        printf ("a[%d][%d] ",i,j);
        scanf ("%d",&a[i][j]);
    }
}
printf ("Enter the rows and columns for matrix 2: \n"); 
scanf ("%d %d",&r2,&c2) ;
printf ("Enter the elements for matrix 1: \n"); 
for (i=0; i<r2; i++){
    for (j=0; j<c2 ; j++ ){
        printf ("b[%d][%d] ",i,j);
        scanf("%d",&b[i][j]);
    }
}
for (i=0; i<r1; i++){
    for (j=0; j<c2 ; j++ ){
        result [i][j] = 0;
    }
}
for (i=0 ; i<r1; i++){
    for(j=0;j<c2 ;j++){
        for (int k = 0; k < c1 ; k++){
            result [i][j] = result[i][j] + a[i][k]*b[k][j];
        }
    }
}
printf ("Multiplication of two matrices: \n"); 
for (i=0 ; i<r1; i++){
    for (j=0 ; j<c2 ; j++ ){
        printf ("%d ", result[i][j]) ;
    }
printf ("\n");
}
return 0;
}