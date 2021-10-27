#include<stdio.h>
#define CLK_TCK 100.0
int main(){
    int C1,C2;
    double T;
    scanf("%d%d",&C1,&C2);
    T=(C2-C1)/CLK_TCK;
    int h,m;
    double s;
    h=T/3600;
    m=(T-3600*h)/60;
    s=T-h*3600-m*60;
    if((s-(int)s)>=0.5){
        s=(int)s+1;
    }else s=(int)s;
    printf("%d:%d:%d",h,m,(int)s);
    return 0;
}