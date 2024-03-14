#include<stdio.h>
int main()
{
	int size,a[size],b[size],count=1,i,j,k;
	printf("\nEnter the size of array\n");
	scanf("%d",&size);
	
	printf("\nenter the element of array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n display the element of array \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
	    for(j=i+1;j<size;j++)
	    {
	    	if(a[i]<a[j])
	    	{
	    		int temp=a[i];
	    		     a[i]=a[j];
	    		     a[j]=temp;
	    		     
			}
		}
	}
	
	printf("\n array in assending order \n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n enter which largest value you want");
	scanf("%d",&k);
	for(i=0;i<size;i++)
	{
		
		if(a[i] != a[i+1]) 
		{
		    count++;
		}
	if(count==k)
	{
		printf("%d\t",a[i+1]);
	}
  }
}
	
	
	
	
	

