#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i; i!=0;a=b,b=i){
		i=a%b;
	}printf("%d\n",a);
	return 0;
}

