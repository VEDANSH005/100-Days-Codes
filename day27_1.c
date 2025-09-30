#include <stdio.h>
int main (){
int i,j;
    for(i=1;i<=10;i++){
        if (1%2!=0){
            for (j=1;j<=i;j++){
                printf ("*");
            }
        printf("\n");
}
}
for (i=9;i>=1;i--){
    if (1%2!=0){
        for (j=1;j<=i;j++){
            printf("*");
        }
    printf ("\n");
}
}  
return 0;
}