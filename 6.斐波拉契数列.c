#include <stdio.h>

int Fib(int n){
	if(n==0 || n==1){
		return 1;
	}else{
		return Fib(n-1) + Fib(n-2);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		printf("%d ",Fib(i));
	}
	return 0;
}
