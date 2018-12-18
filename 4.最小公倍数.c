#include <stdio.h>

int gcd(int a,int b){
	return !b?a:gcd(b,a%b);
}

int lcb(int a,int b){
	return a/gcd(a,b)*b;
}

int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	printf("%d",lcb(n,m));
	return 0;
}
