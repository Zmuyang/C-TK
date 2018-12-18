#include <stdio.h>
#include <string.h>

int main(){
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	int temp=0;
	char *p1=str1,*p2=str2;
	while(p1!='\0'&& p2!='\0'){
		temp=*p1-*p2;
		if(temp!=0) break;
		p1++;
		p2++;
	}
	temp=*p1-*p2;
	printf("%d",temp);
	return 0;
}
