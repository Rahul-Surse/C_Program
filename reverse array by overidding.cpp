#include<iostream>
using namespace std;

int reversearray(int a[])
{
	l

	for(int i=0;i<5;i++)
	{
		for(int j=5;J>=0;j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
}

int area(int l,int w)
{
	return  l*w;
}

int main()
{
	int result=reversearray(1 2 3 4 5);
	cout<<"\n revers array is "<<result<<"\n";
    int result1=area(10,5);
    cout<<"\nArea of rectangle is "<<result1<<"\n";
}
