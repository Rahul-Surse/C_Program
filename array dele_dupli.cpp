#include<stdio.h>
int main()
{
	int size,a[size],b[size],count=1,i,temp,j,k;
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
	
	
	printf("\n sorted element of array \n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		  if(a[i]>a[j])
		  {
		    temp=a[i];
		    a[i]=a[j];
		    a[j]=temp;
	       }
	    }
	    printf("%d\t",a[i]);
	}
	
	printf("\n display the array after deleting dupicates\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if((count>1) && (a[i]!=a[i-1]))
		{
			printf("%d\t",a[i]);
		}
	}
}
