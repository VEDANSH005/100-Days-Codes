#include<stdio.h>
int main(){
    int celcius,farahenit;
    printf("enter temperature in celcius=");
    scanf("%d",&celcius);
    farahenit=(celcius*9/5)+32;
    printf("temperature in farahenit=%d\n",farahenit);
    return 0;
}