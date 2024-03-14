#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	printf("enter the size of array");
	scanf("%d",&size);
	int a[size],i,j,*ptr,count=0,pcount=0;
	ptr=a;

	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	for(i=0;i<5;i++)
	{
      printf("\t %d",ptr[i]);
		
	}
}
