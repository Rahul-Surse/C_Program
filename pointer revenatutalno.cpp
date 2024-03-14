#include<stdio.h>

int main()
{
	int  i,a,num,*ptr1;
	printf("\nenter the nth number to which want a natural number \n");
	scanf("%d",&num);
	a=num;
	printf("\n\nreverse a natural number \n");
	for(i=num;i>0;i--)
	{
		ptr1=&num;
		printf("%d\t",*ptr1);
		num--;
		
	 } 
	
	
}
