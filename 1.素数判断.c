#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool Prime(int x);

int main(){
	int x;
	scanf("%d",&x);
	if(Prime(x)) printf("%d������\n",x);
	else printf("%d��������\n",x);
	return 0;
}

bool Prime(int x){
	int temp=sqrt(x);
	for(int i=2;i<=temp;i++){
		if(x%i==0) return false;
	}
	return true;
}
