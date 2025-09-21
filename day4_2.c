#include<stdio.h>
int main(){
    int sum=0;
    int n;
    char ch='y';
    while(ch=='y'){
        printf("enter a number=");
        scanf("%d",&n);
        sum=sum+n;
        printf("do you want to continue(y/n)?");
        scanf(" %c",&ch);
    }
    printf("sum=%d\n",sum);
    return 0;
}

    