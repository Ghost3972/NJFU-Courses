#include<stdio.h>

#include<stdlib.h>

int main()
{	
	int flag=0;      /*��־*/ 
	char *s=(char*)malloc(sizeof(char)*1000);
	gets(s);
	
	int i;
	int j;
	
	for(i=0;s[i]!='\0';i++){ /*����*/ 
		if(s[i-1]==s[i])
			continue;/*���ǰһ��������һ��*/ 
		flag=0;
		for(j=i;s[i]==s[j];j++){
			flag++;				/*��־++*/ 
	 	}
		if(flag==1){
			putchar(s[i]);
		}else{
			putchar(s[i]);
			printf("%d",flag);
			
		}
	}
	
	
}
