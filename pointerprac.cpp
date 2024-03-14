#include<stdio.h>

int main()
{
	int a[5],b[5],i,s,num,*ptr;
	ptr=a;

	printf("\nenter array \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",ptr+i);
		
	}
	int sum=0;
	printf("\n display the array \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(ptr+i));
		sum=sum+*(ptr+i);
	}
    printf("Su%d\n",sum);
}
