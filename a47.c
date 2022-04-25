#include<stdio.h>
#include"math.h"
int main(){
    int i,a,b,c;
    for(i=100;i<1000;i++){
        a=i;
        int b=0,c=0;
        while(a>0){
            b=a%10;
            c=c+b*b*b;
            a=a/10;
        }
        if(c==i) printf("%d\n",i);
    }
}