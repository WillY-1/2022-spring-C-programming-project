#include <stdio.h>
int main(){
	int a,b,c;
	printf("input a b c:");
	scanf("%d %d %d",&a,&b,&c);
	printf("The minimum value is:");
	if(a>b){
		if(b>c)
		printf("%d",c);
		else
		printf("%d",b);
	}
	else if(a>c)
	printf("%d",c);
	else
	printf("%d",a);
	return 0;
}
