#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int a[1000],b[1000],k=0;
    while(scanf("%d",&n)!=EOF){
        if(n==0) break;
        a[0]=0;
        for(int i=1;i<1000;i++){
a[i]=((int)pow(2,i)-a[i-1])%10000;
        }b[k]=a[n-1];
        k++;
    }for(int j=0;j<k;j++){
        printf("%d\n",b[j]);
    }
    return 0;
    
}