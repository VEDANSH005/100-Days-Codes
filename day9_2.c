#include<stdio.h>
int main(){
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d",&percentage);
    if(percentage>=90){
        printf("Your grade is A");
    }
    else if(percentage>=80){
        printf("Your grade is B");
    }
    else if(percentage>=70){
        printf("Your grade is C");
    }
    else if(percentage>=60){
        printf("Your grade is D");
    }
    else{
        printf("Your grade is F");
    }
    return 0;
}
