#include <stdio.h>

int main(){
	int Row,Lib;
	scanf("%d%d",&Row,&Lib);
	int Num[Row][Lib];
	for(int i=0;i<Row;i++){
		for(int j=0;j<Lib;j++) scanf("%d",&Num[i][j]);
	}
	
	for(int i=0;i<Row;i++){
		int max=Num[0][0];
		int lib=0;
		for(int j=0;j<Lib;j++){
			if(max<Num[i][j]){
				max=Num[i][j];
				lib=j;
			}
		}
		int min=max;
		for(int j=0;j<Row;j++){
			if(min>Num[j][lib]) min=Num[j][lib];
		}
		if(min==max) printf("%d «∞∞µ„\n",max);
	}
	return 0;
}
