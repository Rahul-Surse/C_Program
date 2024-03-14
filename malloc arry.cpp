#include<stdio.h>
#include<Stdlib.h>

int main()
{
	int a,*ptr=NULL;
	a=5;
	
    ptr=(int*)malloc(sizeof(a));
	
	printf("\n enter the element of array");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}

	printf("\ndisplay the array");

	for(int i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	
	}
	
	ptr=(int*)realloc(ptr,sizeof(a)*5);
	
	printf("\n enter the element of array");
	for(int i=5;i<10;i++)
	{
		scanf("%d",ptr+i);
		
	}
		for(int i=0;i<10;i++)
	{
		printf("%d",ptr[i]);
		
	}
}
