#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int Up[3]={0},Lw[3]={0},Num[3]={0},Sp[3]={0},Ot[3]={0};
	char str[3][6];
	for(int i=0;i<3;i++) gets(str[i]);
	for(int i=0;i<3;i++){
		for(int j=0;j<strlen(str[i]);j++){
			if(str[i][j]>='A'&&str[i][j]<='Z') Up[i]++;
			else if(str[i][j]>='a'&&str[i][j]<='z') Lw[i]++;
			else if(str[i][j]>='0' && str[i][j]<='9') Num[i]++;
			else if(str[i][j]==' ') Sp[i]++;
			else Ot[i]++;
		}
	}
	
	for(int i=0;i<3;i++){
		printf("第%d行有 %d 个大写字符，%d 个小写字符，%d 个数字，%d个空格，%d 个其他字符\n",i+1,Up[i],Lw[i],Num[i],Sp[i],Ot[i]);
	}
	return 0;
}
