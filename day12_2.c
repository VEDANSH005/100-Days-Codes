#include<stdio.h>
int main(){
    int bill,units;
    printf("Enter the number of units consumed: ");
    scanf("%d",&units);
    if(units<=100){
        bill=units*5;
        printf("Your electricity bill is %drupees",bill);
    }
    else if(units<=200){
        bill=500+(7*(units-100));
        printf("Your electricity bill is %drupees",bill);
    }
    else if(units<=300){
        bill=1200+(10*(units-200));
        printf("Your electricity bill is %drupees",bill);
    }
    else{
        bill=2200+(12*(units-300));
        printf("Your electricity bill is %drupees",bill);
    }
    return 0;
}