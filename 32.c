#include <stdio.h>
#include <stdlib.h>

int main(){
	char nation[5][30];
	for(int i=0;i<5;i++) gets(nation[i]);
	for(int i=0;i<5;i++){
		for(int j=1;j<5-i;j++){
			if(strcmp(nation[j],nation[j-1])<0){
				char temp[30];
				strcpy(temp,nation[j]);
				strcpy(nation[j],nation[j-1]);
				strcpy(nation[j-1],temp);
			}
		}
	}
	for(int i=0;i<5;i++) printf("%s\n",nation[i]);
	return 0;
}
