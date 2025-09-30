#include<stdio.h>
int main()
{
int i,a[50],n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("Enter the elements in array\n");
for (i=0;i<n;i++){
printf ("Enter the value of a[%d] ",i);
scanf ("%d",&a[i]);
}
for(i=0;i<n;i++)
printf ("%d ",a[i]) ;
return 0;
}