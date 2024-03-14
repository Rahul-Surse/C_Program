#include<stdio.h>


int main()
{
	void array(int *);
	int a[]={10,20,30,40,50};
	array(a);	
}
 void array(int *ptr)
{
	for(int i=0;i<5;i++)
	{
		printf("%d\t",*ptr);
		ptr++;
	}
  
}
