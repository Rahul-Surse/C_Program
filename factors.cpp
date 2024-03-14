#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("enter number");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
