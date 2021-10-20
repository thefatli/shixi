#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int grade[m][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&grade[j][i]);
		}}
	double p[n];
	double a[n];
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		p[i]+=grade[j][i];
	}a[i]=p[i]/m;
	printf("%.2lf ",a[i]);
	}
	printf("\n");
	int count,c;
	double b[m],q[m];
	for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                q[i]+=grade[i][j];
        }b[i]=q[i]/n;
	printf("%.2lf ",b[i]);
	}
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
		if(grade[j][i]>=b[j]){
			count++;
		}
        }if(count==m){
		c++;
	}
        printf("%d",c);
        }
	return 0;
}



