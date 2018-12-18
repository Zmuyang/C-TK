#include <stdio.h>

int main(){
	double dis=10.0,h=10.0;
	while(h/=2){
		dis+=h*2;
	}
	printf("%f",dis);
	return 0;
} 
