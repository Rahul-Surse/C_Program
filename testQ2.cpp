#include<stdio.h>
#include<conio.h>

int main()
{
	int size;
	printf("\n enter the size of array");
	scanf("%d",&size);

	int a[size];
	printf("\n enter the element in array \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n the arrau is \n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	int in;
	printf("\n enter the index \n");
	scanf("%d",&in);
	if(in>=size)
	{
		printf("\n invalide index no");
	}
	
	
	
	int num,rem,count=0, b[count];
	for(int i=0;i<size;i++)
	{
		
		if(i==in)
		{
			
			num=a[i];
			while(num>0)
			{
				num=num/10;
				count++;
			}
			num=a[i];
			
				b[count];
				for(int i=0;i<count;i++)
				{
					rem=num%10;
					b[i]=rem;
					num=num/10;
				}
				int temp;
				for(int i=0;i<count;i++)
				{
					for(int j=i+1;j<count;j++)
					{
						if(b[i]>b[j])
						{
							temp=b[i];
							b[i]=b[j];
							b[j]=temp;
						}
					}
				}
				printf("\n value in assending order\n");
                for(int i=0;i<count;i++)
				{
					printf("%d",b[i]);
				}		
			
		}
		
	}
}
