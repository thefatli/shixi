#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[3][n];
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&a[0][i],&a[1][i],&a[2][i]);
	};
	for(int i=0;i<n;i++){
		if(a[0][i]+a[1][i]>a[2][i]){
			printf("Case #%d:false\n",i+1);
		}else printf("Case #%d:true\n",i+1);
		}
	return 0;
}
