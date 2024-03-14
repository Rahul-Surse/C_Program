#include<stdio.h>
#include<conio.h>

int main()
{
	
	int j,k,h;
	
	printf("\nenter the size of aray\n");
	scanf("%d",&j);
	
	int a[j],len;
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<len;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("\nvlaues in array\n");
	
	for(int i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nenter the index no. from where element need to add\n");
	scanf("%d",&k);
	printf("\nenter the  element need to add\n");
	scanf("%d",&h);
	printf("\n array after adding element\n");
	
	for(int i=0;i<len;i++)
	{
		if(i==k)
		{
			a[i]=h;
			printf("%d\t",a[i]);
		
		}else{
			printf("%d\t",a[i]);
		}
		
	}
	
	
	
	
}
