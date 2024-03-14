#include<stdio.h>
#include<conio.h>

int main()
{
	void sub(int,int);
	int num1,num2;
	printf("\nenter the two number\n");
	scanf("%d %d",&num1,&num2);
    sub(num1,num2);
}

    void sub(int num1, int num2)
    {
    	int result;
    	result=num1-num2;
    	printf(" area of two number = %d",result);
	}
