#include<stdio.h>
int f(int n);
int main()
{
	int i;/*����i*/ 
	 
	for(i=1;i<1000;i++){
		if(i==f(i)){		/*1000����*/ 
			printf("%d\t",i);/*���*/ 
		}
	}
}
int f(int n)	/*��������ĺ�*/ 
{
	int i;
	int sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;/*���*/ 
		}
	}
	return sum;
}


