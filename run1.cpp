//4) WAP to insert the element on specified position in array ?
//e.g. declare the array of size 6 and store 5 values in it and last block should be empty
// a[0] a[1] a[2] a[3] a[4] a[5]
//10 20 30 40 50
//Enter the index on which value want to be insert 
//e.g. index = 2 
//Enter the value which want to store on index 
//Value = 100
//When we insert the value on index then we need to shift the values from index to next index
//e.g.
//a[0] a[1] a[2] a[3] a[4]
//5 9 11 4 6
//10 20 100 30 40 5

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6]={10,20,30,40,50};
	int in,num=100;
//	printf("\n Enter the array \n");
//	for(int i=0;i<6;i++)
//	{
//		scanf("%d",&a[i]);
//	}
    printf("\n enter the index \n");
    scanf("%d",&in);
    
	printf("\n the array is \n");
		for(int i=0;i<6;i++)
	{
		int temp;
		if(i>=in)
		{
			temp=a[i];
			a[i+1]=temp;
		}
//		if(i>=in)
//		{
//			a[i+1]=temp;
//		}
	}
	printf("\n the array is \n");
	for(int i=0;i<6;i++)
	{
		printf("%d \t",a[i]);
	}
	
}
