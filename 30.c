#include <stdio.h>

int main(){
	int M=1;
	double cnt=1.0/M;
	double sum=0;
	int lable=1;
	for(int i=1;i<=100;i++){
		sum+=cnt;
		M++;
		lable*=-1;
		cnt=1.0/M*lable;
	}
	printf("%lf",sum);
	return 0;
}
