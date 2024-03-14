#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr2=NULL,*ptr1=NULL,*ptr=NULL,a,size,size1,temp,temp1;
	printf("\n enter the size of an array\n");
	scanf("%d",&size);
	
	size1=size+size;
	ptr=(int*)malloc(sizeof(size));
	ptr1=(int*)malloc(sizeof(size));
	ptr2=(int*)malloc(sizeof(size1));
	
    printf("\n enter the element of first array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
				
	}
	printf("\n enter the element of second array\n");
	for(int i=0;i<size;i++)
	{
		
		scanf("%d",ptr1+i);
						
	}
			
	for(int i=0;i<size;i++)
	{
			for(int j=i+1;j<size;j++)
	        {
	        	if(ptr[j]>ptr[i])
	        	{
		          int temp=ptr[j];
		           ptr[j]=ptr[i];
		           ptr[i]=temp;
		      
				}
			}
	}
	

	for(int i=0;i<size;i++)
	{
			for(int j=i+1;j<size;j++)
	        {
	        	if(ptr1[j]>ptr1[i])
	        	{
		          int temp1=ptr1[j];
		           ptr1[j]=ptr1[i];
		           ptr1[i]=temp1;
		      
				}
			}
	}
	
	printf("\n first array in desending order\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
						
	}
	printf("\n second array in desending order\n");
	for(int i=0;i<size;i++)
	{
		
		printf("%d\t",ptr1[i]);
						
	}
	
	printf("\n array after merge\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
						
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr1[i]);
	}					
	
	
	
	
}
