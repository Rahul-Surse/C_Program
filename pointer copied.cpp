#include<stdio.h>

int main()
{
	int a[5],b[5],i,num,*ptr,*ptr1;
	ptr=&a[0];
	ptr1=&b[0];
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
	
	printf("\n display the copied array \n");
	for(i=0;i<5;i++)
	{
		*(ptr1+i)=*(ptr+i);
		printf("%d\n",*(ptr1+i));
		
	}
		
	
}
