#include <stdio.h>
#include <string.h>

int main(){
	char a[100],b[100],c[100];
	gets(a);
	gets(b);
	gets(c);
	
	if(strcmp(a,b)<0){
		char str[100];
		strcpy(str,b);
		strcpy(b,a);
		strcpy(a,str);
	}
	
	if(strcmp(a,c)<0){
		char str[100];
		strcpy(str,c);
		strcpy(c,a);
		strcpy(a,str);
	}
	if(strcmp(b,c)<0){
		char str[100];
		strcpy(str,b);
		strcpy(b,c);
		strcpy(c,str);
	}
	puts(a);
	return 0;
}
