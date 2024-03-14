#include<stdio.h>

int main()
{
	int  i,a,num,*ptr1,ptr,sum=0;
	printf("\nenter the nth number \n");
	scanf("%d",&num);
	a=1;
	printf("\n display the sum \n");
	for(i=0;i<num;i++)
	{
		sum=sum+a;
		ptr1=&sum;
		a++;
		
    } 
    printf("\t%d",*ptr1);
	
	
}
