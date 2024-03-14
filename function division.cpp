#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	void div(int,int);
	int num1,num2;
	printf("\nenter the two number\n");
	scanf("%d %d",&num1,&num2);
    div(num1,num2);
}

    void div(int num1, int num2)
    {
    	int result;
    	result=num1/num2;
    	printf(" division is  = %d",result);
	}
