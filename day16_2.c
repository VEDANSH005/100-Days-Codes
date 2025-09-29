#include<stdio.h>
int main(){
    int n,reverse=0,t,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("The reverse is %d\n",reverse);
    if(t==reverse){
        printf("The number is a palindrome\n");
    }
    else{
        printf("The number is not a palindrome\n");
    }
    return 0;
}   