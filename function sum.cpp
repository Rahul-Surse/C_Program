#include<stdio.h>
#include<conio.h>
int main()
{
	void calsum(int);
	int num;
	printf("enter the number");
	scanf("%d",&num);
	calsum(num);
}

    void calsum(int num)
    {
    	int rem,sum;
    	sum=0;
    	while(num>0)
    	{
    		rem=num%10;
    		sum=sum+rem;
    		num=num/10;
    	}
    	 
    	 printf("enter the sum = %d",sum);
    	
    	  	   	   	   	
    }
