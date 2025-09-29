#include<stdio.h>
int main(){
    long long n,i,product=1;
    long long hasEven = 0;
    printf("Enter a number: ");
    scanf("%lld",&n);
    for(i=2;i<=n;i+=2){
        product=product*i;
        hasEven=1;
    }
    if (hasEven){
        printf("%lld\n",product);
    }
    else{
        printf("No even numbers in range\n");
    }
    return 0;
} 