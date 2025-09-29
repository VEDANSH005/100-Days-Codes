#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("The factorial is %d",factorial);
    return 0;
}
