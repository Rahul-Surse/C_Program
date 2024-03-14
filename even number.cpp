#include<stdio.h>

int main()
{
	int a,n,c;
	printf("enter n numbers");
	scanf("%d",&n);
	
	a=1;
	printf("even numbers");
	while(a<=n)
	{
		if(a%2==0)
		printf("%d\n",a);
		a++;
	}
	
	
}
