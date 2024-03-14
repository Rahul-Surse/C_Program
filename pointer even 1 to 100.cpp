#include<stdio.h>

int main()
{
	int  i,a,b, *ptr,*ptr1;
    a=1;
    b=100;
    ptr=&a;
    printf("\n enter the even number from 1 to 100\n");
    while(a<=b)
    {
    	if(a%2==0)
    	{
    		printf("%d\t", *ptr);
		}
		a++;
	}

	
}
