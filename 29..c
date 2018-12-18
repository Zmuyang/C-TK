#include <stdio.h>

int main(){
	int len;
	scanf("%d",&len);
	int arr[len];
	int remain=len;
	int cnt=0;
	while(1){
		for(int i=0;i<len;i++){
			if(arr[i]!=1 && ++cnt==3){
				remain--;
				cnt=0;
				arr[i]=1;
				printf("%d ",i+1);
			}
		}
		if(remain==0) break;
	}
	return 0;
}
