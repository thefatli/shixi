#include<stdio.h>
int main(){
	int grade[2];
	int j=0;
	scanf("%d%d",&grade[0],&grade[1]);
	for(int i=0; i<2;i++){
		switch(grade[i]/10){
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			j++;
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
			j--;
			break;
		default:
			printf("it is error.");
			goto error;
			break;
		}}
	if (j>1) printf("it is pass.");
	else printf("it is not pass.");
error:
	return 0;
}
