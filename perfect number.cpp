#include<conio.h>
#include<stdio.h>
int main()
{
	int num,i,n,sum;
	printf("enter the limit");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum=0;
		for(n=1;n<i;n++)
		{
			if(i%n==0)
			{
				sum=sum+n;
			}
		}
			if(sum==i){
			  printf("%d ",i);
		     }
	
	
		 
   }
   

	
}
