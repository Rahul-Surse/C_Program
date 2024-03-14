#include<stdio.h>

int main()
{
	int  i,a,b,*ptr1;
    a=1;
    b=100;
    
    printf("\n enter the odd number from 1 to 100\n");
    while(a<=b)
    {
    	ptr1=&a;
    	if(a%2!=0)
    	{
    		printf("%d\t",*ptr1);
		}
		a++;
	}

	
}
