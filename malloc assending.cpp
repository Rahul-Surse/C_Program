#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *ptr=NULL,a,size,temp;
	printf("\n enter the size of an array\n");
	scanf("%d",&size);
	
	ptr=(int*)malloc(sizeof(size));
	
	printf("\n enter the element of an array\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",ptr+i);
		
						
	}
		
	printf("\n display element of an array\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
						
	}
	
	printf("\n array in asending order\n");
	for(int i=0;i<size;i++)
	{
			for(int j=i+1;j<size;j++)
	        {
	        	if(ptr[i]>ptr[j])
	        	{
		          int temp=ptr[i];
		           ptr[i]=ptr[j];
		           ptr[j]=temp;
		      
				}
			}
	}
	printf("\n display element of an array\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
						
	}
}
