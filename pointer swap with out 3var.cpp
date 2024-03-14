#include<stdio.h>

int main()
{
	int num1,num2,*ptr1,*ptr2,temp;
	float div;
	
	printf("\nenter thr first number\n",&num1);
	scanf("%d",&num1);
	
	printf("\nenter thr first number\n",&num1);
	scanf("%d",&num2);
	
	ptr1=&num1;
	ptr2=&num2;
	
	*ptr1=*ptr1 + *ptr2;
	*ptr2=*ptr1 - *ptr2;
	*ptr1=*ptr1 - *ptr2;
	
	printf("\n value after swaping : %d",*ptr1);
	printf("\n value after swaping  : %d",*ptr2);
	
	
	
}



