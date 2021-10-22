#include<stdio.h>
int main(){
	int n,j=0;
	scanf("%d",&n);
	while(j<n){
		int b[5]={0};
		char a[101];
		for(int i=0;i<101;i++){
		scanf("%c",&a[i]);
		if(a[i]=='\n') break;
		switch(a[i]){
		case'a':b[0]+=1;break;
		case'e':b[1]+=1;break;
		case'o':b[2]+=1;break;
		case'i':b[3]+=1;break;
		case'u':b[4]+=1;break;
		default:break;
	}}
	printf("a:%d\n",b[0]);
	printf("e:%d\n",b[1]);
	printf("o:%d\n",b[2]);
	printf("i:%d\n",b[3]);
	printf("u:%d\n",b[4]);
	printf("\n");
	j++;
	
	}
	return 0;
}
