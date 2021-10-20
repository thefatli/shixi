#include<stdio.h>
int main(){
	int max=0,min=0,sum=0,n;
	while(scanf("%d ",&n)!=EOF){
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d ",&a[i]);
			sum+=a[i];
		}for(int j=0;j<n;j++){
			if(a[j]<min){
				min=a[j];
			}if(a[j]>max){
				max=a[j];
				}}
		double k;
		k=(sum-max-min)/(n-2);
		printf("%.2lf\n",k);
	}return 0;
}
