#include<stdio.h>
int main(void){
    int i,j=0,a,b;
    for(i=100;i<1000;i++){
        a=i,b=0;
        while(a>0){
            b=b+a%10;
            a=a/10;
        }
        if(i%5==0&&b%9==0) j++;
    }
    printf("%d",j);
}