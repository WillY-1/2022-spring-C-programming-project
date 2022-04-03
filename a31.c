#include<stdio.h>
#include<math.h>
int main(){
    float x,y;
    printf("x=");
    scanf("%f",&x);
    if(x>0&&x<1) printf("y=x=%f",y=x);
    else if(x>=3&&x<=4) printf("y=|x|+2=%f",y=abs(x)+2);
    else printf("y=sin(x*x)=%f",y=sin(x*x));
}