#include<stdio.h>
#include<math.h>
int main(void){
    int i;
    double a=1,e=1,b;
    for(i=1;;i++){
        a=a*i;
		e=e+(1/a);
		if((1/a)<pow(10,-10)) break; 
    }
	printf("e=%.13f\n",e);
}
