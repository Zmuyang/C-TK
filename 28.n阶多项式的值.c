#include <stdio.h>
#include <stdlib.h>

int P(int n,double x);

int main(){
	int n;
	double x;
	scanf("%d%lf",&n,&x);
	printf("%lf",P(n,x));
	return 0; 
}

int P(int n,double x){
	if(n==0) return 1;
	else if(n==1) return x;
	else return (2*(n-1)+1)*x*P(n-1,x) -  (n-1)*P((n-1)-1,x);
}
