#include<stdio.h>
int main(){
    int i,peach=1;
    for(i=8;i>=0;i--){
        peach=(peach+1)*2;
    }
    printf("the monkey picked %d peaches at the 1st day",peach);
}