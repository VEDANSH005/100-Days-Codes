#include<stdio.h>
int main(){
    int a[50],n, i, Max, Min;
    printf ("Enter the size of the array\n");
    scanf ("%d",&n);
    printf ("Enter the elements in array\n");
    for (i=0;i<n;i++){
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
    }
    Max = a[0];
    Min = a[0];
    for (i=1; i<n;i++){
        if (a[i]>Max){
        Max = a[i];
    }
    if (a[i]<Min){
        Min = a[i];
    }
}
printf ("Maximum number in array : %d\n",Max);
printf ("Minimum number in array : %d\n",Min);
return 0;
}
