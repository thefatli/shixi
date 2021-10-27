
#include<stdio.h>
int main(){
    int a[10]={0},sum,c[3];
    char n[101];
        for(int i=0;;i++){
            scanf("%c",&n[i]);
switch (n[i])
{
case '0':a[0]++;
    break;
case '1':a[1]++;
    break;
case '2':a[2]++;
    break;
case '3':a[3]++;
    break;
case '4':a[4]++;
    break;
case '5':a[5]++;
    break;
case '6':a[6]++;
    break;
case '7':a[7]++;
    break;
case '8':a[8]++;
    break;
case '9':a[9]++;
    break;
default:
    break;
}if(n[i]=='\n') goto out;
}out:
sum=a[1]+2*a[2]+3*a[3]+4*a[4]+5*a[5]+6*a[6]+7*a[7]+8*a[8]+9*a[9];
c[0]=sum/100;c[1]=(sum-100*c[0])/10;c[2]=sum-100*c[0]-10*c[1];
for(int k=0;k<3;k++){
    switch (c[k])
{
case 0:printf("ling");
    break;
case 1:printf("yi");
    break;
case 2:printf("er");
    break;
case 3:printf("san");
    break;
case 4:printf("si");
    break;
case 5:printf("wu");
    break;
case 6:printf("liu");
    break;
case 7:printf("qi");
    break;
case 8:printf("ba");
    break;
case 9:printf("jiu");
    break;
default:
    break;
}
if(k<2) printf(" ");
}return 0;
}