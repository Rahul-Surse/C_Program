//check the array mejority...


#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

class Duplicates
{
	protected:
		int a1[5];
		public:
			
	void setArray(int a[])
	{
		for(int i=0;i<5;i++)
		{
			a1[i]=a[i];
		}
	
	}
	
};
class RemoveDuplicates:public Duplicates
{
	public:
	void removeDuplicates()
	{
		int temp;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(a1[i]<a1[j])
				{
					temp=a1[i];
					a1[i]=a1[j];
					a1[j]=temp;
				}
			}
			
		}
		int size=5;
		for(int i=0;i<5;i++)
		{
			if(a1[i]==a1[i+1])
			{
				
				for(int j=i+1;j<size-1;j++)
				{
					a1[j]=a1[j+1];
					
				}
//				size--;
			}
		}
		for(int i=0;i<size-1;i++)
		{
			cout<<a1[i]<<"\t";
		}
	}
	
};

int main()
{
	int a[5];
	cout<<"\n enter the element in array \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	RemoveDuplicates d;
	d.setArray(a);
	d.removeDuplicates();


	
}



