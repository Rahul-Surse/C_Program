#include<stdio.h>

int main()
{
	int a[5],b[5],i,j,s,num,*ptr,*sum,temp;
	ptr=&a[0];
	s=0;
	sum=&s;
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
	
	
	printf("\n array assending order\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
	    	if(*(ptr+i)>(*(ptr+j)))
		    {
			   temp=*(ptr+i);
			   *(ptr+i)=*(ptr+j);
			   *(ptr+j)=temp;
			}
			
		}
		printf("\t%d",*(ptr+i));
		
	   }
	}

