#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class ArrayOperation
{
	protected:
		int b[5];
         
		
	public:
	void setarray(int a[])
	{
		for(int i=0;i<5;i++)
		{
			b[i]=a[i];
		}
	   
	}
	virtual void performOperation()=0;
};
class Sorting : public ArrayOperation
{
	public:
		
	void performOperation()
	{
		int temp;
		for(int i=0;i<5;i++)
		{
			for(int j=i+1;j<5;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		cout<<"\n array after assending sort \n";
        for(int i=0;i<5;i++)
        {
        	cout<<b[i]<<"\t";
		}
		
	}
};
class Deletion : public ArrayOperation
{
	public:
		int in,end;
	void performOperation()
	{
		end=5;
		cout<<"\n enter the index from which you want to delete element\n";
		cin>>in;
		for(int i=in;i<5;i++)
		{
			b[i]=b[i+1];
		
		}
		end--;
		cout<<"\n array after deletion \n";
		for(int i=0;i<end;i++)
		{
			cout<<b[i]<<"\t";
		}
		
	}
	
};
class Union : public ArrayOperation
{
	public:
		
	void performOperation()
	{
		
	}
	
};
class Majority: public ArrayOperation
{
	public:
		
	void performOperation()
	{
		
	}
	
};


int main()
{
	int a[5];
	int size1=5;
	cout<<"\n enter the array\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	Sorting s1;
	s1.setarray(a);
	s1.performOperation();

    Deletion d1;
    d1.performOperation();
	

}

