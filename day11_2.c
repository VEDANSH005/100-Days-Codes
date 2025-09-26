#include<stdio.h>
int main(){
    int cost,selling,profitpercentage,losspercentage;
    printf("Enter the cost price: ");
    scanf("%d",&cost);
    printf("Enter the selling price: ");
    scanf("%d",&selling);
    if(selling>cost){
        profitpercentage=((selling-cost)*100)/cost;
        printf("You made a profit of %d",profitpercentage);
    }
    else if(cost>selling){
        losspercentage=((cost-selling)*100)/cost;
        printf("You made a loss of %d",losspercentage);
    }
    else{
        printf("No profit no loss");
    }
    return 0;
}
