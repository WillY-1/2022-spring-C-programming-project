#include<stdio.h>
int main(){
    int a,b,c;
    printf("input a b c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&b<c) printf("max=%d\nmin=%d",c,a);
    else if(c<=b&&b<=a) printf("max=%d\nmin=%d",a,c);
    else if(b<=a&&a<=c) printf("max=%d\nmin=%d",c,b);
    else if(c<=a&&a<=b) printf("max=%d\nmin=%d",b,c);
    else if(a<=c&&c<=b) printf("max=%d\nmin=%d",b,a);
    else if(b<=c&&c<=a) printf("max=%d\nmin=%d",a,b);
}
