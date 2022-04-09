#include<stdio.h>
int main(void){
    int m,i,a[m];
    float aver;
    printf("how many numbers?");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("input the %d number:",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<m;i++){
        if(a[i]>max) max=a[i];
    }
    for(i=0;i<m;i++){
        if(a[i]<min) min=a[i];
    }
    for(i=0;i<m;i++){
        aver=aver+a[i];
    }
    aver=aver/m;
    printf("max:%d min:%d average:%.2f",max,min,aver);
}