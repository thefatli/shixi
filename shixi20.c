#include<stdio.h>
#include<math.h>
int main(){
    int m,n,count=0;
    scanf("%d",&m);
    while(count<m){
        scanf("%d",&n);
        double sum=0.0;
        for(int i=1;i<n+1;i++){
            sum+=pow(-1,(i+1))*(1.0/i);
        }printf("%.2lf\n",sum);

    count++;}return 0;
    
}