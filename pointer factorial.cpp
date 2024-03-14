#include<stdio.h>

int main()
{
	int end,*ptr,*fact;
	
	printf("\nenter the number\n");
	scanf("%d",&end);
	
	printf("\n factorial of given number");
	
	int f=1;
	ptr=&end;
	fact=&f;
   for(int i=1;i<=*ptr;i++)
	{
	     *fact=*fact*i;
	}
	
	printf("\n %d\n", *fact);
	
	
	
}
