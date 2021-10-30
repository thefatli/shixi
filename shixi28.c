#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0,num[10010]={0};
    scanf("%d\n",&n);
    while(count<n){
        char a[127];
    for(int i=0;a[i-1]!='\n';i++){
        a[i]=getchar();
        switch (a[i])
{
case '0':num[count]++;
    break;
case '1':num[count]++;
    break;
case '2':num[count]++;
    break;
case '3':num[count]++;
    break;
case '4':num[count]++;
    break;
case '5':num[count]++;
    break;
case '6':num[count]++;
    break;
case '7':num[count]++;
    break;
case '8':num[count]++;
    break;
case '9':num[count]++;
    break;
default:
    break;
}
    }count++;
    
    
}for(int i=0;i<n;i++){
    printf("%d",num[i]);
}
return 0;
}