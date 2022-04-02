#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    printf("O:%o H:%x\n",a,a);
    b=a%5;
    printf("%d",b);
    return 0;
}