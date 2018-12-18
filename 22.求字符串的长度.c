#include <stdio.h>

int main(){
	char S[100];
	gets(S);
	char* p=S;
	int len=0;
	while(*p!='\0'){
		len++;
		p++;
	}
	printf("%d",len);
	return 0;
}
