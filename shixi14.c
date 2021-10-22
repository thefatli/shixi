#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n=0) break;
        	int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int t=a[0],s=0,q=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>a[i+1]){
			t=a[i+1];
			s=i+1;
			}else{
			 t=a[i];
			 s=i;
			}}
		a[s]=q;
		a[0]=t;
		for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		}}
	return 0;
	}



		

