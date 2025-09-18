#include<stdio.h>
int main(){
    int a,b,add,sub,mult;
    float div;
    printf("enter 1st no.=");
    scanf("%d",&a);
    printf("enter 2nd no.=");
    scanf("%d",&b);
    add=a+b;
    printf("addition of two no.=%d\n",add);
    sub=a-b;
    printf("subtraction of two no.=%d\n",sub);
    mult=a*b;
    printf("multiplication of two no.=%d\n",mult);
    div=a/b;
    printf("division of two no.=%.2f\n",div);
    return 0;

}