#include<stdio.h>

int main()
{
	int i,sum,a,b,c;
	
	printf("enter a number:");
	scanf("%d",&a);
	
	i=1;
	sum=0;
	while(i<a)
	{
		if (a%i==0)
		{ 
		 sum=sum+i;
		 
		}
		i++;
	}
	
	
	printf("%d\n",sum);
	if (sum==a){
	
	 printf(" perfect number");
}
	 else
	 {
	 
	  printf("not a perfect number");
	
 }
	
}
