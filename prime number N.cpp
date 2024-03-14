#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,count,n;
	
	printf("enter the n number");
	scanf("%d",&n);
	num=1;
	while(num<n)
	{
		count=0;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{ 
			  count++;
			  break;
			}
		}
		   if(count==0 && num!=1)
		   { 
		   printf("%d ",num);
		   }
		   num++;
	}
	
}
