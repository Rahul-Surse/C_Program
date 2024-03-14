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
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	printf("\nvalue after swaping : %d\n ",*ptr1);
	printf("\nvalue after swaping : %d\n ",num1);
	printf("\nvalue after swaping : %d\n ",*ptr2);
	printf("\nvalue after swaping : %d\n ",num2);
	
	
	
}
