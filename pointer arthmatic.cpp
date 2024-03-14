#include<stdio.h>

int main()
{
	int num1,num2,*ptr1,*ptr2,sum,sub,mul;
	float div;
	
	printf("\nenter thr first number\n",&num1);
	scanf("%d",&num1);
	
	printf("\nenter thr first number\n",&num1);
	scanf("%d",&num2);
	
	
	ptr1=&num1;
	ptr2=&num2;
	
	sum=(*ptr1) + (*ptr2);
	printf("\n sum : %d",sum);
	
	sub=(*ptr1) - (*ptr2);
	printf("\n sub : %d",sub);
	
	div=(*ptr1) / (*ptr2);
	printf("\n div : %f",div);
	
	mul=(*ptr1) * (*ptr2);
	printf("\n mul : %d",mul);
}
