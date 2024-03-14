#include<stdio.h>

int main()
{
	int a[5],b[5],i,s,num,*ptr,*sum;
	ptr=&a[0];
	s=0;
	sum=&s;
	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	
	printf("\n display the array \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
	
	printf("\n display the sum of array \n");
	for(i=0;i<5;i++)
	{
		*sum=*sum+*(ptr+i);
		
		
	}
	printf("%d\n",*sum);
}
