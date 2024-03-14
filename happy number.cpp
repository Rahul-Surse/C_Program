#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num,sum=0,rem;
	
	
	printf("enter the number\n");
	scanf("%d",&num);
	
	
	while(sum!=1 && sum!=4)
	{
		sum=0;
		while(num>0)
		{
			rem=num%10;
			sum=sum+rem*rem;
			num=num/10;
		//	printf("sum=%d",sum);
			
			}
			
			num=sum;
			
	}
	if(sum==1){
		printf("happy num");
	}
else
{
	printf(" not happy num");
}
			
	return 0;	
			
			
			
		

	

	 
	
	
	
	
	
}
