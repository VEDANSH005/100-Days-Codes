#include<stdio.h>
int main(){
    int second,minute,hour;
    printf("enter time in seconds=");
    scanf("%d",&second);
    minute=second/60;
    hour=minute/60;
    second=second%60;
    minute=minute%60;
    printf("time in hour:minute:second=%d:%d:%d\n",hour,minute,second);
    return 0;
}