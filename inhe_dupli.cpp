
#include<iostream>
using namespace std;

class duplicates
{
	protected:
		int b[6];
	public:
	void setArray(int a[])
	{
		for( int i=0;i<6;i++)
		{
			b[i]=a[i];
		}
	
	}
	
};
class removeduplicate : public duplicates
{	protected:
	   int temp,end;
	   int count=0;
	public:
	void removeduplicates()
	{
		for(int i=0;i<6;i++)
		{
			for(int j=i+1;j<6;j++)
			{
				if(b[i]>b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
			
		}
		cout<<"\n array in assending order \n";
		for( int i=0;i<6;i++)
		{
		   cout<<b[i]<<"\t";
		}
		cout<<"\n display the array after deleting dupicates\n";
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			if(b[i]==b[j])
			{
				i++;
			}
		}
	         cout<<b[i]<<"\n";	
	}	   	
    }
};

int main()
{
	int a[6];
	cout<<"\n enter the  element of array \n";
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	removeduplicate obj;
	obj.setArray(a);
	obj.removeduplicates();


}

