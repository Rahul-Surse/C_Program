#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	void check(int);
	int num1,num;
	printf("\n enter the number\n");
	scanf("%d",&num);
	check(num);

}
int sum=0;

void check(int num)
{ 


    int num1,flag=0;
    num1=num;
	if(num>0)
	{
	
	        int rem,mul;
		    mul=1;
		    rem=num%10;
		    
		    for(int i=1;i<=rem;i++)
		    {
		    	mul=mul*i;
		    }
		    sum=sum+mul;
		    if(sum==num1)
		    {
		       flag=1;
			}
		    num=num/10;
		    check(num);
	}
	else if(flag==1)
	{
		printf("\n  strong number \n");
	}
	else
	{
		printf("\n  not strong number \n");
	}
           
	
	
}
