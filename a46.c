#include<stdio.h>
int main(){
    int i,j;
    for(i=0;i<=40;i++){
        for(j=0;j<=40;j++){
            if(i*i+j==1053&&j*j+i==873) printf("%d %d",i,j);
        }
    }
}