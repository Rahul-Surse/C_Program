#include<stdio.h>
#include<conio.h>

int main()
{
	
	int i;
	printf("\nenter the length of an array\n");
	scanf("%d",&i);
	
	int a[i],len;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("\narray is \n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nduck number from array\n");
	
	int rem,num;
	for(int i=0;i<len;i++)
	{
		while(a[i]>0)
		{
		
		rem=a[i]%10;
		if(rem==0)
		{
			printf("%d\t",a[i]);
			break;
		}
		num=a[i]/10;
		a[i]=num;
	    }
	    
	    
	}
	
	
	
	
	
}
	
