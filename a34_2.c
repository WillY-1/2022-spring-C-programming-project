#include<stdio.h>
int main(){
    float a,tax,after;
    int b;
    printf("income:");
    scanf("%f",&a);
    b=a/1000;
    switch(b){
        case 0:
            tax=0;
            break;
        case 1:
            tax=(a-1000)*0.05;
            break;
        case 2:
        case 3:
            tax=50+(a-2000)*0.1;
            break;
        case 4:
        case 5:
            tax=250+(a-4000)*0.15;
            break;
        default:
            tax=600+(a-6000)*0.2;
    }
    after=a-tax;
    printf("tax:%.2f atfer tax income:%.2f",tax,after);
}