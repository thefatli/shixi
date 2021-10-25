#include<stdio.h>
#include<math.h>
int simple(int a){
	int p=1;
	for(int i=2;i<a;i++){
		if(a%i==0) p=0;}
	return p;
}
int main(){
	int M,N,count=0;
	scanf("%d %d",&M,&N);
	int a[10000],i=0;
	for(int k=2; ;k++){
		if(simple(k)){
			a[i]=k;
			i++;
		if(i>N) goto out;}
	}
out:for(int k=M;k<N+1;k++){
	    printf(" %d",a[k]);
	count++;
	if(count%10==0) printf("\n");}
    return 0;
}
