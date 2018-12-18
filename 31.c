#include <stdio.h>

int main(){
	char A[]="abcdefg";
	char B[10];
	int index=0;
	for(int i=0;A[i]!='\0';i++){
		if(i%2==0) B[index++]=A[i];
	}
	printf("%s",B);
	return 0;
}
