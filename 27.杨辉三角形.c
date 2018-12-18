#include <stdio.h>
#include <stdlib.h>

int main(){
	int h;
	scanf("%d",&h);
	int s=1;
	printf("1\n");
	for(int i=2;i<=h;s=1,i++){
		printf("1 ");
		for(int j=1;j<=i-2;j++) printf("%d ",s=(i-j)*s/j);
		printf("1\n");
	}
	return 0;
}
