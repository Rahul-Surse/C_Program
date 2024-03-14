#include<stdio.h>

int main()
{
	int a[5],i,num,*ptr;
	ptr=&a[0];
	printf("\nenter the element of array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	
	printf("\n display the element of array \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
}
