#include<stdio.h>
#include<conio.h>

int main()
{
	int num,sum=0,rem,mul=1;
	
	printf("enter a number");
	scanf("%d",&num);
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		mul=mul*rem;
		num=num/10;	
	}
	printf("sum=%d\n",sum);
	printf("mul=%d\n",mul);
	
	if (sum=mul)
	{
		printf("it is a spy number\n");
		
	}
	
   else
    {
    	printf("it is not spy number");
	}
}
