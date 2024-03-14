#include<stdio.h>

int main()
{
	int a[5],b[5],i,s,num,*ptr;
	ptr=a;

	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	
	printf("\n display the even element of array \n");
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)%2==0)
		{
			printf("\t%d",*ptr+i);
		}
	
	}
	
	printf("\n display the odd element of array \n");
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)%2!=0)
		{
			printf("\t%d",*ptr+i);
		}
	
	}
	
	
}
