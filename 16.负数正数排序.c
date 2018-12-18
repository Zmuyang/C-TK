#include <stdio.h>

int main(){
	int num[100];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&num[i]);
	int L=0,R=n-1;
	while(L<R){
		while(L<R && num[R]>=0) R--;
		while(L<R && num[L]<0 ) L++;
		int temp = num[R];
		num[R]=num[L];
		num[L]=temp;
	}
	for(int i=0;i<n;i++) printf("%d ",num[i]);
	return 0;
}
