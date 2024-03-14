#include<stdio.h>

int main()
{
	int a,b;
	 
	printf("enter Range:");
	scanf("%d",&a);//5
	
	int i=1;
	int count=0;


	while(i<=a)
	{
			count=0;
			int k=1;
			while(k<=i)
			{
					if(i%k==0)
					{
						++count;	
					}	
					k++;
			}	
			if((count==2))
			printf("%d,",i);
			i++;
	}
	
	
	 
	 
}
