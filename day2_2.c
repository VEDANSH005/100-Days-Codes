#include<stdio.h>
int main(){
    int radius,area,circumference;
    float pi=3.14;
    printf("enter radius of circle=");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("area of circle=%d\n",area);
    circumference=2*pi*radius;
    printf("circumference of circle=%d\n",circumference);
    return 0;
}