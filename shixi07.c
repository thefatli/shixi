#include<stdio.h>
int main(){
	int n,i,x;
	while(scanf("%d",&n)!=EOF){
		int dig[n];
		for(i=0;i<n;i++){
			scanf("%d",&dig[i]);
		}for(i=0;i<n;i++){
			if(dig[i]%2!=0){
			x*=i;
			}}
	printf("%d\n",x);
	}
	return 0;
}
