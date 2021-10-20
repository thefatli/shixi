#include<stdio.h>
int main(){
	int y,m,d,a;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF){
			if(m<=2){
				printf("%d\n",31*(m-1)+d);
			}else{
				if(m%2==0){
					a=60+61*(m/2-1)+d;
					}else{
						a=91+61*(m/2-1)+d;
					}
				if(y/4==0 && y/100!=0 || y/400==0){
			printf("%d\n",a);
				}else{
					printf("%d\n",a-1);
				}}}
			return 0;
	}
			
