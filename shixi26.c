#include<stdio.h>
int main(){
    int a,b,c,d;
	scanf("%d%d",&c,&d);
    a=c;b=d;
	for(int i=1; i!=0;a=b,b=i){
		i=a%b;
	}printf("%d\n",c/a*d);
return 0;
}//找不到循环停止条件(可能这是难点吧）。。。是我不懂了，菜狗本人