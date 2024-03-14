#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class ArrayOperation
{
	protected:
		int size,b[5];
         
		
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
			
			if((b[i]) > (b[j]))
			{
			
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		   }
		}
		cout<<"\n the array in assending order \n";
		for(int i=0;i<5;i++)
		{
			cout<<b[i]<<"\t";
		}
		
	}
};
class Deletion : public ArrayOperation
{
	public:
		int in;
				
	void setindex(int in1)
	{
		in=in1;
	}
	
	void performOperation()
	{
     	for(int i=0;i<5;i++)
     	{
     		cout<<b[i];
     		if(i==in)
     		{
     			for(int j=i;j<4;j++)
     			{
     				b[j]=b[j+1];
				}
			}
        }
        cout<<"\n the aaray after deletion is \n";
        for(int i=0;i<5;i++)
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
	int size1=5,in1;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	Sorting s1;
	s1.setarray(a);
	s1.performOperation();
	
	printf("\n enter the no of index from which element to delete \n ");
	scanf("%d",&in1);
	 
	Deletion d1;
	d1.setindex(in1);
	d1.performOperation();
	


}

