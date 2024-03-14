#include<Stdlib.h>
#include<stdio.h>

int main()
{
	int a,*ptr=NULL,sum=0;
	a=5;
	
    ptr=(int*)malloc(sizeof(a));
	
	printf("enter the element of array\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}

      printf("\ndisplay the array\n");

	for(int i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	
	}
	
	printf("\n sum of  the element ");
	for(int i=0;i<5;i++)
	{
		sum=sum+ptr[i];
	}
	printf("\n %d",sum);
	
}
