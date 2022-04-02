#include<stdio.h>
int main(){
    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char str;
	int i;
    scanf("%c",&str);
    for(i=0;i<=26;i++){
    	if(str==a[i])
    	printf("%c %c %c",a[i-1],a[i],a[i+1]);
	}
    return 0;
}