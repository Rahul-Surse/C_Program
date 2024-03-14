#include<stdio.h>
#include<conio.h>

int main()
{
	
	int j,k,h,i,temp,size,flag=0;
	

	
	int a[5],b[5],len;
     printf("Enter the size");
      scanf("%d",&size);
	printf("\nenter the value in array\n");
	
	for( i=0;i<size;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
   
	printf("\n display values in array\n");
	
	for( i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
		b[i]=a[i];
	
	}
	
	int mid=size/2;
	int end=size-1;
	for( i=0;i<mid;i++)
	{
		int temp=b[i];
		     b[i]=b[end];
		     b[end]=temp;
		     end--;
	}
	printf("\n display  after reverse\n");
	
	for( i=0;i<size;i++)
	{
		printf("%d\t",b[i]);
	
	}
	 
		for( i=0;i<size;i++)
		{
			 	if(a[i]!=b[i])
			 	{
			 		 flag=1;
			 		 break;
				 }
			}
		if(flag==1)
		{
			printf("\nArray is  not palindrome\n");
		}
		else
		{
	    	printf("\nArray is palindrome\n");
				 
    	 }
		return 0;
}



