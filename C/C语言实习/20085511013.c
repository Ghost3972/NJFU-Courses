#include<stdio.h>
#include<stdlib.h>
/*	1 2 3
	4 5 6
	7 8 9
	
	7 4 1
	8 5 2
	9 6 3
	
	*/
int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	int **a=(int**)malloc(n*sizeof(int*));/*����ָ�붯̬��ֵ*/ 
	for(i=0;i<n;i++){
		a[i]=(int*)malloc(n*sizeof(int));/*һ��ָ�붯̬��ֵ*/ 
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);/*��̬��ֵ*/ 
		}
	}
	for(i=n-1;i>=0;i--){
		for(j=0;j<n;j++){
			printf("%d	",a[n-1-j][n-1-i]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++){		/*�ͷ�һ��ָ��*/ 
		free(a[i]);
	}
	free(a);				/*�ͷŶ���ָ��*/ 

}


