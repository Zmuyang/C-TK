#include <stdio.h>
#include <string.h>

int main(){
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	char *p=s2;
	int index=0;
	while(*p!='\0'){
		s1[index++]=*p;
		p++;
	} 
	s1[index]='\0';
	puts(s1);
	return 0;
}
