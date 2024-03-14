//
//Q. WAP to create function name as 
//int deleteFromArray(int a[],int index): this function accept integer type of array and index of
//                                        integer array and delete value from specified index and shift 
//										  element at left hand side.
//int deleteFromArray(char[],int index): this function accept character type of array and index and delete
//                                       character from specified index and move index at lower side of
//										 character array.



#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

int deleteFroamArray(int a[],int index2,int size)
{

	for(int i=0;i<size;i++)
	{
		if(i==index2)
		{
			

			for(int j=i+1; j<size; j++)
			{
				
				a[i]=a[j];
				cout<<i<<"\t"<<j<<"\t\n";
				i++;
				
				
			}
			
			cout<<"\n the array after deletion \n";
			for(int i=0;i<size-1;i++)
			{
				cout<<a[i]<<"\t";
			}
			
		}
		
	}
	
}

int deleteFroamArray(char b[],int index1)
{
	int len;
	len=strlen(b);
	for(int i=0;i<len;i++)
	{
		if(i==index1)
		{
			

			for(int j=i+1; j<len+1; j++)
			{
				
				b[i]=b[j];
				cout<<i<<"\t"<<j<<"\t\n";
				i++;
				
				
			}
			
			cout<<"\n the string after deletion"<<b;
			
		}
		
	}
}

int main()
{
	int size,len,index1,index2;
	char b[10];
	cout<<"\n enter the string \n";
	gets(b);
	cout<<"\n enter the size of array\n";
	cin>>size;
	
	int a[size];

	cout<<"\n Enter the array \n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\n Enter the index of string\n";
	cin>>index1;
	cout<<"\n Enter the index of array\n";
	cin>>index2;
	deleteFroamArray(b,index1);
	deleteFroamArray(a,index2,size);
	
	
	
	
	
}


