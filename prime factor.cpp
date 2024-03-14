#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,a,count;
	printf("enter number");
	scanf("%d",&num);
	
	i=1;
	while(i<=num)
	{
		if(num%i==0)
		{
			a=1;
			count=0;
			while(a<=i){
				if(i%a==0)
				{
					count++;
				}
				a++;
			} 
			if(count==2){
			printf(" %d\t\n",i);
		}
		}
		i++;
	}
}
