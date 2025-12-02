#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int c;
    printf("Before Swapping a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping a=%d b=%d\n",a,b);
    return 0;
}