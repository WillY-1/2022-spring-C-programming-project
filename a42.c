#include<stdio.h>
int main(void)
{
    int i,a[20],x=0,y=0,z=0;
    for(i=0;i<20;i++){
        printf("input the %d number:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++){
        if(a[i]>0) x=x+1;
        else if(a[i]<0) z=z+1;
        else y=y+1;
    }
    printf("positive:%d zero:%d negitive:%d",x,y,z);
}