#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str1[1000],str2[100][10];
	int index=0,cnt=0;
	gets(str1);
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]==' '){
			index++;
			cnt=0;
		}
		str2[index][cnt++]=str1[i];
	}
	
	int temp=index;
	for(int i=0;i<=index;i++){
		if(strlen(str2[i])==1) continue;
		for(int j=0;j<strlen(str2[i]);j++){
			if(isalpha(str2[i][j]==0)){
				temp--;
				break;
			}
		}
	}
	printf("%d",temp);
	return 0;
} 
