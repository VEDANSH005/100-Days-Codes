#include<stdio.h>
int main(){
    int n,binary;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    binary=0;
    int place=1;
    while(n!=0){
        int r=n%2;
        binary=binary+r*place;
        n=n/2;
        place=place*10;
    }
    printf("The binary is %d",binary);
    return 0;
}
    