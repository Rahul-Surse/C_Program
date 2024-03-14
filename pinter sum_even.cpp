#include<stdio.h>

int main()
{
	int  a,num,*ptr1,sum=0;
    a=1;

    
    printf("\n enter the nth number\n");
    scanf("%d",&num);
    while(a<=num)
    {
    	
    	if(a%2==0)
    	{
    		sum=sum+a;
    		ptr1=&sum;
    		
		}
		a++;
	}
	printf("%d\t",*ptr1);	
}
