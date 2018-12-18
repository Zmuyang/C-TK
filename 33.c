#include <stdio.h>

typedef struct StudentCourse{
	int C;
	int E;
	int M;
	char name[8];
}StudentCourse;

int main(){
	StudentCourse S[8];
	for(int i=0;i<8;i++){
		scanf("%d%d%d%s",&S[i].C,&S[i].E,&S[i].M,&S[i].name);
	}
	for(int i=0;i<8;i++){
		for(int j=1;j<8-i;j++){
			int T1=S[j].C+S[j].E+S[j].M;
			int T2=S[j-1].C+S[j-1].E+S[j-1].M;
			if(T1>T2){
				StudentCourse temp;
				temp=S[j];
				S[j]=S[j-1];
				S[j-1]=temp;
			}
		}
	}
	for(int i=0;i<3;i++) printf("%s\n",S[i].name);
	return 0;
}
