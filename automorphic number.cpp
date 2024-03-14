#include<stdio.h>
#include<conio.h>

int main()
{
	int num,rem,sqr;
	
	printf("enter the number\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		sqr=num*num;
		rem=sqr%10;
		break;
	}   
	 if (rem == num)
	 {
	 	printf("it is a automorphic number");
	 }
	else
	{
		printf("it is not a automorphic number");
	}
	
	
	return 0;
}
