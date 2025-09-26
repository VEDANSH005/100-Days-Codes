#include<stdio.h>
int main(){
    int fine,days;
    printf("Enter the number of days the book is late: ");
    scanf("%d",&days);
    if(days<=5){
        fine=2*days;
        printf("Your fine is %drupees",fine);
    }
    else if(days<=10){
        fine=10+(4*(days-5));
        printf("Your fine is %drupees",fine);
    }
    else if
    (days<=30){
        fine=30+(6*(days-10));
        printf("Your fine is %drupees",fine);
    }
    else{
        printf("Your membership is cancelled");
    }
    return 0;
}   