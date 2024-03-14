#include<stdio.h>


int main()
{
	void array(int *);
	int a[5];
	array(a);	
}
 void array(int *ptr)
{
	int a[5];
	printf("\n enter the array \n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	}
		printf("\n display the array \n");
		for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		
	}
	
	printf("\n the reversed array");
	int mid,j,temp;
	mid=2;
	j=4;
	for(int i=0;i<mid;i++)
	{ 
	     temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
		j--;
	}
			for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		
	}
  
  
}
