#include<stdio.h>
#include<math.h>
int qy(int A,int D1){
int n[10],b=A,count=0,a=0;
    for(int i=0;i<10;i++){
        n[i]=b%10;b=b/10;
        if(n[i]==D1){
            count++;
        }
    }for(int i=0;i<count;i++){
        a+=D1*pow(10,i);}
        return a;}

int main(){
    int A,D1,B,D2,a,b;
    scanf("%d%d%d%d",&A,&D1,&B,&D2);
    a=qy(A,D1);b=qy(B,D2);
    printf("%d",a+b);
return 0;
}
    
