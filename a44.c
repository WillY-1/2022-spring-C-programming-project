#include<stdio.h>
int prime(int a){
    int i;
    for(i=2;i<=a;i++){
        if(a%i==0) 
            break;
    }
    if(a==i) return 1;
    else return 0;
}
int mirror(int a){
    int b=a,m=0;
    while(a>0){
        m=m*10+a%10;
        a=a/10;
    }
    if(b==m) return 1;
    else return 0;
}
int main(){
    int i;
    for(i=0;i<=1000;i++){
        if(prime(i)==1&&mirror(i)==1) printf("%d\n",i);
    }
}