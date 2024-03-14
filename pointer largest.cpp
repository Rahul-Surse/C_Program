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

    if(*ptr1>*ptr2)
    {
    	printf("\n largest value : %d\n",*ptr1);
	}
	else
	{
		printf("\n largest value : %d\n",*ptr2);
	}



}
