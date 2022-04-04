#include<stdio.h>
int main(){
    float a,tax,after;
    printf("income:");
    scanf("%f",&a);
    if(a<1000) tax=0;
    else if(a<2000) tax=(a-1000)*0.05;
    else if(a<4000) tax=50+(a-2000)*0.1;
    else if(a<6000) tax=250+(a-4000)*0.15;
    else tax=600+(a-6000)*0.2;
    after=a-tax;
    printf("tax:%.2f atfer tax income:%.2f",tax,after);
}
