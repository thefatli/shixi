#include<stdio.h>
int main(){
    int T,count=0;
    scanf("%d",&T);
    while(count<T){
        int m,n,x,y;
        scanf("%d%d%d%d",&m,&n,&x,&y);
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int sum[1000]={0},c=0;
        for(int i=0;i<(m-x+2);i++){
            for(int j=0;j<(n-y+2);j++){
                for(int p=0;p<x;p++){
                    for(int q=0;q<y;q++){
sum[c]+=a[i+p][j+q];
                    }
                }c++;
            }c++;
        }
        int max=0;
        for(int i=0;i<(m-x+1)*(n-y+1);i++){
            if(sum[i]>max){max=sum[i];
            }       }printf("%d",max);count++;   }
            return 0;
}