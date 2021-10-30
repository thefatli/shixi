#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    double max[100];
    while(count<n){
        int num;
        double h[num];
        scanf("%d",&num);
        for(int i=0;i<num;i++){
            scanf("%lf",&h[i]);
        }
        max[count]=h[0];
        for(int i=0;i<num;i++){
            if(max[count]<h[i]) max[count]=h[i];
        }
        count++;
    }for(int i=0;i<n;i++){
        printf("%.2lf\n",max[i]);
    }return 0;

}