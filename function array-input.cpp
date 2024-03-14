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
	
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	}
		for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
		
	}
  
}
