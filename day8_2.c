#include<stdio.h>
int main(){
    int a=30,b=50,c=10;
    if(a>=b&& a>=c){
        printf("%d is the largest number\n",a);
    }
    else if(b>=a&& b>=c){
        printf("%d is the largest number\n",b);
    }
    else{
        printf("%d is the largest number\n",c);
    }
    return 0;
}