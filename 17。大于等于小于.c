#include <stdio.h>

int main(){
	int num1[10];
	int num2[10];
	for(int i=0;i<10;i++) scanf("%d",&num1[i]);
	for(int i=0;i<10;i++) scanf("%d",&num2[i]);
	int big=0,small=0;
	for(int i=0;i<10;i++){
		if(num1[i]<num2[i]) small++;
		if(num1[i]>num2[i]) big++;
	}
	printf("大于的次数:%d\n",big); 
	printf("小于的次数:%d\n",small); 
	printf("等于的次数:%d\n",10-(big+small));
	return 0; 
}
