#include<stdio.h>
#include<Stdlib.h>

int main()
{
	int a,*ptr=NULL;
	a=5;
	
    ptr=(int*)calloc(a,sizeof(int));
	
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
	
}
