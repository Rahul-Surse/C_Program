#include<stdio.h>

int main()
{
	int size;
	printf("enter the size of array");
	scanf("%d",&size);
	int a[size],i,j,*ptr,count=0,pcount=0;
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
	
	printf("\n count of prime number in the array \n");
	for(i=0;i<5;i++)
	{
		  count=0;
			for(j=2;j<*(ptr+i);j++)
        	{
		       if((*(ptr+i)!=2) && (*(ptr+i)%j==0))
		       {
		       	 count++; 
		    
			   }
		
        	}
        	 if((count==0) && (*(ptr+i)!=1))
			   {
			   	pcount++;
			   }
	}
	printf("%d\t",pcount);
	
	
	
	
	
	
	
}
