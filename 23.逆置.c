#include <stdio.h>

int reverse(int *p,int left,int right);

int main(){
	int num[10];
	for(int i=0;i<10;i++) scanf("%d",&num[i]);
	int n,m;
	scanf("%d %d",&n,&m);
	reverse(num,0,9);
	reverse(num,0,m-1);
	reverse(num,m,m+n-1);
	for(int i=0;i<10;i++) printf("%d ",num[i]);
	return 0;
}

int reverse(int *p,int left,int right){
	int i=left;
	int j=right;
	for(;i<j;i++,j--){
		int temp = *(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
	}
}
