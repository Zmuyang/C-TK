#include <stdio.h>
#include <math.h>

int Figure(int x);

int main(){
	for(int i=1;i<=20000;i++){
		int F=Figure(i);
		int x=i;
		int sum=0;
		for(int j=1;j<=Figure(i);j++){
			int temp=pow(10,F-1);
			sum+=pow(x/temp,Figure(i));
			x%=temp;
			F--;
		}
		if(sum==i) printf("%d\n",i);
	}
	return 0;
}

int Figure(int x){
	if(x/10000) return 5;
	if(x/1000) return 4;
	if(x/100) return 3;
	if(x/10) return 2;
	return 1;
}
