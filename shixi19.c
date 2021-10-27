#include<stdio.h>
#include<math.h>
int main(){
    int N,i=0;
    scanf("%d",&N);
    double r[10000];
    while(i<N){
        int x,y;
        scanf("%d%d",&x,&y);
        r[i]=pow(x*x+y*y,0.5);
    i++;}double max=r[0];
    for(int j=0;j<N;j++){
        if(r[j]>max) max=r[j];
    }int k=(int)(max*100+0.5);
    double j;
    j=k/100.0;
    printf("%.2lf",j);
    return 0;


}