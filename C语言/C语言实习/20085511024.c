#include<stdio.h>
#include<math.h>
int isprime(int n);
int main()
{
	int flag=0;/*��־*/ 
	int i;
	int j;
	int num=0;/*�ж��ٸ���*/ 
	//scanf("%d",&k);
	for(i=2;i<1000;i=i+2){
		
		for(j=2;j<1000;j++){
			if(isprime(j)&&isprime(i-j)){/*�ж�*/ 
				flag=1;
				num++;/*������1*/ 
				break;
			}else{
				flag=0;
				
			}
		}
	}
	if(num==499){ /*����������499*/ 
		printf("yes");
		
	}else{
		printf("no");/*�������*/ 
	}
}
int isprime(int n)/*�ж��ǲ�������*/ 
{
	int flag=1;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}
