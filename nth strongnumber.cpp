#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,t,lim,temp,fact,rem,i=0,sum=0;
	printf("enter a limit");
	scanf("%d",&lim);
	n=t;
	n=1;
	while(n<=lim)
	{
		n=t;
		
	    while(t>0)
	    {
		
		rem=t%10;
		i=1;
		fact=1;
		while (i<=rem)
		{
		  fact=fact*i;
		  i++;
		
	    }
	    sum=sum+fact;
	    t=t/10;
		}
		t++;
	}
			if (sum==n)
		{
			printf("%d",n);
		}
        else
        {
        	printf("not found");
		}
}

		
