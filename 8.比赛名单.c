#include <stdio.h>

int main(){
	char A[3]={'a','b','c'};
	char B[3]={'d','e','f'};;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==0&&j==0) continue;
			if(i==2&&(j==0||j==2)) continue;
			printf("%c %c\n",A[i],B[j]);
		}
	}
	return 0;
}
