#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    printf("input a b:");
    scanf("%f %f",&a,&b);
    c=a+b,d=a-b,e=a*b,f=a/b;
    printf("sum=%.2f\n,difference=%.2f\n,product=%.2f\n,ratio=%.2f",c,d,e,f);
    return 0;
}
