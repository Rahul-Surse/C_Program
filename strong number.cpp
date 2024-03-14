#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num,temp,fact,rem,i=0,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	
	temp=num;
	while(num>0)
	{
		rem=num%10;
		i=1;
		fact=1;
		while (i<=rem)
		{
		  fact=fact*i;
		  i++;
		
							
		}
		
		sum=sum+fact;
		printf("%d\n",sum);
		num=num/10;
			
	}
	
	if(sum==temp)
	{
		printf(" it is a strong number");
		
	}
	else 
	{
		printf("it is not a strong number");
	}

}
