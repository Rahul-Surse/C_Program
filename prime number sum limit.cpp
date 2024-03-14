#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,i,sum=0,count;
	printf("enter the number :\n");
	scanf("%d",&num);
	n=2;
	while(n<=num)
	{
		count=0;
		i=1;
		while(i<=n)
		{
			if(n%i==0)
			{
				count++;
				
			}
			i++;
		}
		if(count==2)
		{
			printf("%d",n);
			sum=sum+n;
		}
		n++;
	}
	printf("\n the sum of all prime number from 1 to n is %d",sum);
	
	return 0;
	
}
