//Q1. create class name as ArrayOperation with virtual function name as performOperation()  and create its Two child classes
//    name as Unique , MergeArray. We need to inherit the Value class in Unique , MergeArray and override the virtual function 
//	in it write the logic.
//	
//	1. Unique Class : -
//	
//	Input array elements: 1, 2, 3, 5, 1, 5, 20, 2, 12, 10 
//
//	Output :
//	All unique elements in the array are: 3, 20, 12, 10 
//  
//	2. MergeArray class :-
//	
//	Input -First Array :- 1 2 3 4 5
//             	Second Array :-  6 7 8 9 10 
//
//	Output - 1 10 2 9 3 8 4 7 5 6
#include<string.h>
#include<iostream>
using namespace std;

class ArrayOperation
{
	protected : 
	int a[5],b[5];
	   
	public:
		void setarray(int a1[],int b1[])
		{
			for(int i=0;i<5;i++)
			{
				a[i]=a1[i];
				b[i]=b1[i];
			}
			
		}
		virtual void performOperation()=0;
		 
};

class Unique : public ArrayOperation
{
	public:
		virtual void performOperation()
		{
			cout<<"\n unique number \n";
			int size=0,flag,u[size],count=0;
			for(int i=0;i<5;i++)
			{
				count=0;
				for(int j=0;j<5;j++)
				{
					if(a[j]==a[i])
					{
						count++;
					}
			    }
			    if(count==1)
			    {
			    	cout<<a[i]<<"\t";
				}
			}
			
		}
	
};

class MergeArray : public ArrayOperation
{
	protected : 
      	int a[5],b[5];
	public:
		void setarray(int a1[],int b1[])
		{
			for(int i=0;i<5;i++)
			{
				a[i]=a1[i];
				b[i]=b1[i];
			}
			
		}
		virtual void performOperation()
		{
	
			cout<<"\n merge array is \n";
			int m[10],end=4,j=0;
			for(int i=0;i<10;i++)
			{
				if((i%2)!=0)
				{
					m[i]=b[end];
					end--;
				}
				else
				{
					m[i]=a[j];
					j++;
				}
			}
			for(int i=0;i<10;i++)
			{
				cout<<m[i]<<"\t";
			}
		}
};

int main()
{
	int a1[5],b1[5];
	cout<<"\n enter the first array\n";
	for(int i=0;i<5;i++)
	{
		cin>>a1[i];
	}
	cout<<"\n enter the second array \n";
	for(int i=0;i<5;i++)
	{
		cin>>b1[i];
	}
	
	Unique u1;
	u1.setarray(a1,b1);
	u1.performOperation();
	
	MergeArray m1;
	m1.setarray(a1,b1);
	m1.performOperation();
	
}

