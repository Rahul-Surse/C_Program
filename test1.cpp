#include<stdio.h>

int main()
{
	int a[5],*ptr;
	ptr=&a[0];
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&ptr[1+i]);
		
	}
	printf("\n the array is \n");
	for(int i=0;i<5;i++)
	{
		printf("%d \t",ptr[1+i]);
	}
	
}
