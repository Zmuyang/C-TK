#include <stdio.h>

int main(){
	char s1[10];
	gets(s1);
	char s2[10];
	int m;
	scanf("%d",&m);
	int len=0;
	char *p=s1+m-1;
	while(*p!='\0'){
		s2[len++]=*p;
		p++;
	}
	s2[len]='\0';
	printf("%s",s2);
	return 0;
}
