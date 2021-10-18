#include<stdio.h>
int main(){
	int i=2,j=2,count=0;
	while(i<98){
	while(j<i){
		if(i%j!=0){
			j++;
		}else{
		j=2,i++;
		}}
	printf("%d ",i);
	count++; 
	i++,j=2;
	if(count%5==0){
		printf("\n");
	}}
	return 0;
}
