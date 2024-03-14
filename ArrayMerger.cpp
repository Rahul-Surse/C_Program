#include<iostream>
using namespace std;

int main()
{
	int a[5],b[5],i,j,k=0,c[10];
	cout<<"Enter the first array values";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the second array values";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
	}

	for(i=0;i<5;i++)
	{
	     c[k]=a[i];
	     k++;
	}
	
	for(i=0;i<5;i++)
	{
	     c[k]=b[i];
	     k++;
	}
	cout<<"Display after Merger array";
	for(i=0;i<10;i++)
	{
	    cout<<c[i]<<"\t";
	}
	
}
