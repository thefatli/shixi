#include<stdio.h>
int main(){
	int m=0,n=0;
	int a[n];
	while(scanf("%d%d",&n,&m)!=EOF){
	while(m!=0 && n!=0){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int t=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
		if(a[j]<a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}}
	for(int i=0;i<m;i++){
	printf("%d",a[i]);
	}}}	
	printf("\n");
		return 0;
}
		

