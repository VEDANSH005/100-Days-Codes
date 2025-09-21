#include<stdio.h>
int main(){
    int principal,rate,time,simple_interest,compound_interest;
    printf("enter principal=");
    scanf("%d",&principal);
    printf("enter rate=");
    scanf("%d",&rate);
    printf("enter time=");
    scanf("%d",&time);
    simple_interest=(principal*rate*time)/100;
    printf("simple interest=%d\n",simple_interest);
    compound_interest=principal*(1+rate/100)^time-principal;
    printf("compound interest=%d\n",compound_interest);
    return 0;
}
