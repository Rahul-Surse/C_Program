#include<stdio.h>

int main()
{
	
	int num,rem,flag=0;
	printf("enter a number");
	scanf("%d",&num);
	
	while (0<num){
		rem=num%10;
		if(rem==0){
			flag=1;
		}
		num=num/10;
	}
	if(flag==1)
	{
		printf("duck number");
	}
	else
	{
		printf("not a duck number");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
