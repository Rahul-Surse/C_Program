#include<iostream>
#include<string.h>
using namespace std;

class mergarray
{
	private : 
	int a1[],b1[],c[];
	int size2,size3;


		
	public :
		mergarray(int a[],int b[],int size)
		{
			size2=size;
			a1[size2];
			b1[size2];
			for(int i=0;i<size2;i++)
			{
				a1[i]=a[i];
				b1[i]=b[i];
			}
			
			
			
		}
		 void mergtwoarray(int size1)
		 { 
		   int k=0;
		 	size3=size1;
		 	c[size3];
		 for(int i=0;i<size2;i++)
		 {
		 	c[k]=a1[i];
		 	k++;
		 }
		 int j=0;
		 for(int i=0;i<size3;i++)
		 {
		 	
		 	c[k]=b1[j];
		 	k++;
		 }
         for(int i=0;i<size3;i++)
         {
		     cout<<"\t"<<c[i];
		 	
		 }
//	     void sortarray()
//	     {
//	     	
//		 }

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
		
	

