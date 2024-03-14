#include<stdio.h>
int main()
{
	int a[5],i,j;
	int first=a[0];
	int second=a[0];
	printf("Enter the array values");
	for(i=0;i<5;i++)
	{
		 scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(first<a[i])
		{
			second=first;
			first=a[i];
		}
		else
		{
			if(a[i]>second && a[i]!=first)
			{
				second=a[i];
			}
		}
	}
	if(first==second)
	{
		printf("Not second largest present in array");
	}
	else
	{
		printf("Second largest:%d",second);
	}
}
