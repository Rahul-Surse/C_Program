#include<stdio.h>

int main()
{
	int num1,num2,num3,*ptr1,*ptr2,*ptr3,temp;
	float div;
	
	printf("\nenter thr first number\n",&num1);
	scanf("%d",&num1);
	
	printf("\nenter thr first number\n",&num2);
	scanf("%d",&num2);

	printf("\nenter thr first number\n",&num3);
	scanf("%d",&num3);	
	
	ptr1=&num1;
	ptr2=&num2;
	ptr3=&num3;
	
	printf("max to min");
	if(*ptr1>*ptr2>*ptr3)
	{
		printf("\n%d\n",*ptr1);
	}
	else if(*ptr2>*ptr1>*ptr3)
	{
		printf("\n%d\n",*ptr2);
	}
	else
	{
		printf("\n%d\n",*ptr3);
	}
}
