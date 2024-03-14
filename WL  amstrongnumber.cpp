#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	
	int count=0,rem,num1;
	num1=num;
	while(num1>0)
	{
		num1=num1/10;
		count++;
	}
	 num1=num;
	while (num1>0)
	{
		rem=num1%10;
		sum=sum+pow(rem,count);
		num1=num1/10;
	}
	printf("sum=%d\n",sum);
	
if (num==sum)
{
	printf("armstrong number");
}
	else
	printf("not a armstrong");

}
