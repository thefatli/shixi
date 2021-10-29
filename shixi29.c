#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }int sum=0;
    for(int i=0;i<N;i++){
     for(int j=0;j<N;j++){
         if(a[i]!=a[j]){
         sum+=10*a[i]+a[j];}
         }   
    }printf("%d",sum);
    return 0;
}