#include<stdio.h>
int main(){
    float c,f;
    printf("input F:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("C:%2.7f\n",c);
}