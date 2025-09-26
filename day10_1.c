#include<stdio.h>
int main(){
    int  a,b,c;
    printf("enter the 1 side of triangle: ");
    scanf("%d",&a);
    printf("enter the 2 side of triangle: ");
    scanf("%d",&b);
    printf("enter the 3 side of triangle: ");
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("The triangle is equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("The triangle is isosceles");
    }
    else
    {
        printf("The triangle is scalene");
    }
    return 0;
}