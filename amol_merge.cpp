#include<iostream>
#include<string.h>
using namespace std;

class mergarray
{
	private : 
	int size4, size5;
	int a1[],b1[];
	int c[];

		
	public :
		mergarray(int a[],int b[],int size)
		{
			size4=size;
			a1[size4];b1[size4];
			for(int i=0;i<size4;i++)
			{
				a1[i]=a[i];
				b1[i]=b[i];
			}

	    	
		}
		 void mergtwoarray(int size1)
		 {
		 	size5=size1;
		 	c[size5];
		 	for(int i=0;i<size5;i++)
		 	{
		 	   if(i<size4)
		 	   {
		 	   	c[i]=a1[i];
				}if(i>=size4){
					c[i]=b1[i];
				}
			}

           for(int i=0;i<size5;i++)
           {
           	cout<<c[i];
		   }

		 	
		 }
	     void sortarray()
	     {
	     	
		 }
		 
};

int main()
{
	cout<<"\n enter the size of array \n";
	int size,size1;
	cin>>size;
	cout<<"\n enter the element  of array  a \n";
	int a[size], b[size];
	size1=size+size;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	cout<<"\n enter the element  of array  b \n";
	for(int i=0;i<size;i++)
	{
		cin>>b[i];
	}
	
	mergarray m1(a,b,size);
	m1.mergtwoarray(size1);
	
	
	
	
	
	
}
