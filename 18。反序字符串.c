#include <stdio.h>

int main(){
	char s[100];
	gets(s);
	char *front=s;
	int len=0;
	while(*front!='\0'){
		len++;
		front++;
	}
	char *tail=s+len-1;
	front=s;
	while(front<=tail){
		char temp = *front;
		*front = *tail;
		*tail= temp;
		front++;
		tail--;
	}
	printf("%s",s);
	return 0;
}
