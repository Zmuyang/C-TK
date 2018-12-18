#include <stdio.h>
int flag=0;
int Processing(int a,int b);

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int max=Processing(a,b);
	int min=Processing(a,b);
	int sum=Processing(a,b);
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
}

int Processing(int a,int b){
	flag++;
	if(flag==1){
		return a>b?a:b;
	}
	if(flag==2){
		return a<b?a:b;
	}
	if(flag==3) return a+b;
}
