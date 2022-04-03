#include<stdio.h>
int main(){
    int h,m,s;
    s=20000;
    m=s/60,s=s%60;
    h=m/60,m=m%60;
    printf("20000s=%dh %dmin %ds",h,m,s);
}