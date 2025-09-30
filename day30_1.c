#include<stdio.h>
int main(){
int i, a[50], even=0, odd=0, n;
printf("Enter the size of the array\n");
scanf ("%d",&n);
printf("Enter the elements in array:\n");
for (i=0;i<n;i++){
    printf ("a[%d]",i) ;
    scanf ("%d",&a[i]);
}
for (i=0;i<n;i++){
    if (a[i]%2==0){
        even++;
}
else{
odd++;
}
}
printf ("Even numbers present in given array: %d\n", even) ;
printf ("odd numbers present in given array: %d\n", odd);
return 0;
}
