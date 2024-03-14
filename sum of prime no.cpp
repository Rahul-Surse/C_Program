#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,sum=0,count=0,i;
	printf("enter the limit");
	scanf("%d",&num);
	
	n=2;
	while(n<=num)
	{
		count=0;
		i=1;
		while(i<=n)
		{
           if(n%i==0){
           	count++;
		   }
		   i++;			
		}
		if(count==2){
			printf(" %d\n",n);
			sum=sum+n;
			}
			
		n++;
		
	}
	printf("sum= %d\n",sum);
	return 0;
	
}
