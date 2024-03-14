#include<iostream>
#include<string.h>
using namespace std;

class ReverseApp
{
	private :
		int size1,size2;
	public :
		ReverseApp(int a[],int size)
		{
			size1=size;
			int temp,i;
			int end=size-1;
			int mid=size/2;
			for(i=0;i<mid;i++,end--)
			{
			      temp=a[i];
			      a[i]=a[end];
			      a[end]=temp;
			}
			for(i=0;i<size;i++)
			{
				cout<<"\n"<<a[i]<<"\t";
			}
    	}
			
			ReverseApp(char b[])
			{
				int temp,count=0;
				for(int i=0;b[i]!='\0';i++)
				{
					count++;
				}
			   	temp=count;
			   	int end=count-1;
			   	int mid=end/2;
				for(int i=0;i<mid;i++,end--)
			    {
			      temp=b[i];
			      b[i]=b[end];
			      b[end]=temp;
			    }
			    cout<<"\n"<<b;
				
			}

};

int main()
{
	int a[5],size=5;
	char b[20];
	cout<<"\n enter the element of  string\n";
	gets(b);
	cout<<"\n enter the element of the array\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	ReverseApp R1(a,size);
	ReverseApp R2(b);
}
