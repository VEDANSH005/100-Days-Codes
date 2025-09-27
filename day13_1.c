#include<stdio.h>
int main(){
    char operator;
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf ("Enter an operator (+, -, *, /, %%): ");
    scanf (" %c", &operator);
    switch (operator)
    {
        case '+':
            printf("%d/n",a+b);
            break;
        case '-':
            printf("%d/n",a-b);
            break;
        case '*':
            printf("%d/n",a*b);
            break;
        case '/':
            if(b!=0){
                printf("%d/n",a/b);
            }
            else{
            printf("error:Division by zero");
            }
            break;
        case '%':
            if(b!=0){
                printf("%d/n",a%b);
            }
            else{
                printf("error:Modulus by zero");
            }
            break;
        default:
            printf("Invalid operation");
    }
    return 0;
}