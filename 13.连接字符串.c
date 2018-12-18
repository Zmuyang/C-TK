#include <stdio.h>
#include <string.h>

int main(){
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int i=strlen(str1);
	for(int j=0;j<strlen(str2);j++) str1[i++]=str2[j];
	puts(str1);
	return 0;
} 
