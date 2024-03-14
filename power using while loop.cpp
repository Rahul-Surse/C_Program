#include<stdio.h>
#include<conio.h>
int main ()
{
	int num1,i,p,pow=1;
	printf("enter the  number");
	scanf("%d",&num1);
	
	printf("enter the power");
	scanf("%d",&p);
	
	
	for(i=1;i<=p;i++)
	{
		pow=pow*num1;
				
	}
	printf("result = %d",pow);
	
	
	
	
}
