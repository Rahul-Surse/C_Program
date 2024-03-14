#include<stdio.h>

int main()
{
	int a[5],b[5],i,j,s,num,*ptr,max,min;
	ptr=a;

	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	
	printf("\n display the array \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		
	}
	
	printf("\n display the maxx element in array \n");
	max=0;
	for(i=0;i<5;i++)
	{
	    if(*(ptr+i)>max)
	    {
	        max=*(ptr+i);
		}
	}
	printf("%d\n",max);
	
	printf("\n display the min element in array \n");
	min=*ptr;
	for(i=0;i<5;i++)
	{
	        	if(*(ptr+i)<min)
	        	{
	        		min=*(ptr+i);
				}
	}
	printf("%d\n",min);
	
	
}
