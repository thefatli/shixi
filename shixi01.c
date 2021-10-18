#include<stdio.h>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if( a+c>b && a+b>c && b+c>a){
		if(a==b==c) printf("1\n");
		else if (a!=b!=c) printf("3\n");
		else printf("2\n");
	}else printf("0\n");
	return 0;
}
