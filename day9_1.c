#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,root1,root2;
    printf("Enter the coefficients a=");
    scanf("%d",&a);
    printf("Enter the coefficients b=");
    scanf("%d",&b);
    printf("Enter the coefficients c=");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and different\n");
        printf("Root1= %d\nRoot2= %d",root1,root2);
    }
    else if(d==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and same\n");
        printf("Root1=Root2= %d",root1);
    }
    else{
        printf("Roots are complex and different\n");
    }
    return 0;
}
