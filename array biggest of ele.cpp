#include<stdio.h>
int main()
{
	int size,a[size],b[size],temp,count=0,i,j,k,l=0;
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
	
	while(l<size)
	{
	
	printf("\n enter the number which biggest you want\n");
	scanf("%d",&k);
	
	for(i=0;i<size;i++)
	
	{
		a[i]>k;
	    temp=a[i];
	}

    printf("\n the biggest element is : %d\n",temp);
    break;
	l++;
    }
	
}
