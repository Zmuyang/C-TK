#include <stdio.h>

int main(){
	int Y,M,D;
	scanf("%d %d %d",&Y,&M,&D);
	int reu=0;
	if(Y%4==0&&Y%100!=0){
		switch(M){
			case 1:
				reu+=D;
				break;
			case 2:
				reu+=(31+D);
				break;
			case 3:
				reu+=(31+29+D);
				break;
			case 4:
				reu+=(31+29+31+D);
				break;
			case 5:
				reu+=(31+29+31+30+D);
				break;
			case 6:
				reu+=(31+29+31+30+31+D);
				break;
			case 7:
				reu+=(31+29+31+30+31+30+D);
				break;
			case 8:
				reu+=(31+29+31+30+31+30+31+D);
			case 9:
				reu+=(31+29+31+30+31+30+31+31+D);
				break;
			case 10:
				reu+=(31+29+31+30+31+30+31+31+30+D);
				break;
			case 11:
				reu+=(31+29+31+30+31+30+31+31+30+31+D);
				break;
			case 12:
				reu+=(31+29+31+30+31+30+31+31+30+31+30+D);
				break;
			default:
				break;
		}
	}else{
		switch(M){
			case 1:
				reu+=D;
				break;
			case 2:
				reu+=(31+D);
				break;
			case 3:
				reu+=(31+28+D);
				break;
			case 4:
				reu+=(31+28+31+D);
				break;
			case 5:
				reu+=(31+28+31+30+D);
				break;
			case 6:
				reu+=(31+28+31+30+31+D);
				break;
			case 7:
				reu+=(31+28+31+30+31+30+D);
				break;
			case 8:
				reu+=(31+28+31+30+31+30+31+D);
			case 9:
				reu+=(31+28+31+30+31+30+31+31+D);
				break;
			case 10:
				reu+=(31+28+31+30+31+30+31+31+30+D);
				break;
			case 11:
				reu+=(31+28+31+30+31+30+31+31+30+31+D);
				break;
			case 12:
				reu+=(31+28+31+30+31+30+31+31+30+31+30+D);
				break;
			default:
				break;
		}
	}
	printf("%d",reu);
	return 0;
}
