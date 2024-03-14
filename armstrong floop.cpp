#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int sum=0,lim,I,i,rem,count;
	printf("enter the n limit");
	scanf("%d",&lim);
	
	
	for(i=1;i<=lim;i++)
	{
		sum=0;
		I=i;
		count=0;
		while(I>0)
		{  
	      I=I/10;
		   count++;
		}
		I=i;
		
		while(I>0)
		{
			rem=I%10;
			sum=sum+pow(rem,count);
			I=I/10;
		
	    }
		
	    if(i==sum)
	    {
	    printf("armstrong number=%d\n",i);
	   }
	}
}
