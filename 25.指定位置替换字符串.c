#include <stdio.h>

void Replace(char *s1,char *s2,int i,int j);

int main(){
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	int i,j;
	scanf("%d %d",&i,&j);
	Replace(s1,s2,i,j);
	printf("%s",s1);
	return 0;
}

void Replace(char *s1,char *s2,int i,int j){
	i--;
	j--;
	int index=0;
	while(i<=j){
		*(s1+i)=*(s2+index);
		i++;
		index++;
	}
}
