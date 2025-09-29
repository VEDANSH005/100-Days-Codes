#include<stdio.h>
int main(){
    int n,p,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    p=n;
    while(p!=0){
        r=p%10;
        sum=sum+r*r*r;
        p=p/10;
    }
    if(sum==n){
        printf("The number is an Armstrong number\n");
    }
    else{
        printf("The number is not an Armstrong number\n");
    }
    return 0;
}