#include<stdio.h>
#include<math.h>
int main(){
    int i;
    double hs,h=100;
    for(i=1;i<=10;i++){
        hs=100/pow(2,i);
        h=h+hs;
    }
    printf("%.7f %.7f",hs,h);
}