#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='0' && s[i]<='9') continue;
		s[i] = s[i]+(25-2*(s[i]-'a'));
	}
	puts(s);
	return 0;
}
