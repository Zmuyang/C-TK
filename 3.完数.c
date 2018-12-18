#include <stdio.h>
#include <math.h>

int main(){
	for(int i=2;i<=20000;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0) sum+=j;
		}
		if(sum==i) printf("%d\n",i);
	}
	return 0;
}
