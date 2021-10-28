#include<stdio.h>
#include<math.h>
int main(){
double R1,P1,P2,R2;
scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
double A,B;
A=R1*cos(P1)*R2*cos(P2)-R1*sin(P1)*R2*sin(P2);
B=R1*cos(P1)*R2*sin(P2)+R2*cos(P2)*R1*sin(P1);
if(B>0){
    printf("%.2lf+%.2lfi",A,B);
}
if(B==0){
    printf("%.2lf",A);
}
if(B<0){
    printf("%.2lf%.2lfi",A,B);
}return 0;
}