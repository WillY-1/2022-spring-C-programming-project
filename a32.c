#include<stdio.h>
main(){
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char ch;
    int i;
    printf("input a letter:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        ch=ch+32;
        for(i=0;i<=32;i++){
        if(a[i]==ch){
        	if(ch<=116) printf("password:%c\n",a[i+6]-32);
            else printf("password:%c\n",a[i-20]-32);
            }
        } 
    }
    else
    for(i=0;i<=32;i++){
        if(a[i]==ch){
        	if(ch<=116) printf("password:%c\n",a[i+6]);
            else printf("password:%c\n",a[i-20]);
        }
    } 
}

