#include<stdio.h>
#include<math.h>
int main(){
	int n,i,a,j;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
	int comp[n];
	for(i=0;i<n;i++){
		scanf("%d",&comp[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
		if(fabs(comp[j])<fabs(comp[j+1])){
			a=comp[j];
			comp[j]=comp[j+1];
			comp[j+1]=a;
			}
		}}
		for(i=0;i<n;i++){
		printf("%d ",comp[i]);
		}
		printf("%d\n",comp[i]);
		}
		return 0;
		}
