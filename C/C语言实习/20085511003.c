#include<stdio.h>
int GYS(int a,int b);
int main()
{
	int x,y; /*������ */ 
	int max,min;
	if(x>y){
		max=x;
		min=y;
	}else{
		max=y;
		min=x; 
	}/*��������С*/ 
	scanf("%d %d",&max,&min);/*����*/ 
	printf("GYS = %d, GBS = %d",GYS(max,min),max*min/GYS(max,min));/*���*/ 
}
int GYS(int a,int b)
{
	
	if(a%b==0){  /*���a%b=0������b*/ 
		return b;
	}else{
		return GYS(b,a%b);/*������Ƿ���GBS��b,a/b��*/ 
	}
	
}

