#include <stdio.h>

int main(){
	int a,n;
	int sum=0;
	int cnt=0;
	scanf("%d %d",&n,&a);
	for(int i=0;i<n;i++){
		cnt*=10;
		cnt+=a;
		sum+=cnt;
	}
	printf("%d",sum);
	return 0;
}
