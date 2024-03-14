#include<stdio.h>
#include<conio.h>

int main()
{
	
	int i,size;
//	printf("\nenter the length of an array\n");
//	scanf("%d",&size);
//	
	int a[5],len,value,position;
	
	len=sizeof(a)/sizeof(a[0]);
	printf("\nenter the value in array\n");
	
	for(int i=0;i<5;i++)
	{
		
		scanf("%d",&a[i]);
		
    }
	printf("\narray is\n");
	
	for(int i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
     
     printf("\nenter the value to be inserted\n");
     scanf("%d",&value);
     printf("\nenter the position where the value to be inserted\n");
     scanf("%d",&position);
//     printf(" \nthe inserted array\n");
//    for (i=0;i<len;i++)
//    {
//    	if(i==j)
//    	{
//    		printf("\n%d\n",b);
//    		len++;
//		}else{
//		
//    	printf("\n%d\n",a[i]);
//    	
//    }
//	}
     for(i=4;i>=position;i--)
     {
     	a[i+1]=a[i];
	 }
	 a[position]=value;
	 
	printf("Display after insert\n");
	for(int i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}

 
}
