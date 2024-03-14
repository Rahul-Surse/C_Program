#include<iostream>
#include<string.h>
using namespace std;

class mergarray
{
	private:
		int c[],a1[],b1[],size3,size2;
	    
	public :
	    mergarray(int a[],int b[],int size)
	    { 
	      size3=size;
	     a1[size],b1[size];
	     for(int i=0;i<size;i++)
	     {
	     	a1[i]=a[i];
	     	b1[i]=b[i];
		 }
		}
	    void mergtwoarray(int size1)
	    {
	    	size2=size1;
	    	c[size2];
	    	for(int i=0;i<size3;i++)
	    	{
               c[i]=a1[i];
			}
			for(int j=0,i=size3;j<size2;j++,i++)
	    	{
               c[i]=b1[j];
			}
	        
	         for(int i=0;i<size3;i++)
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
   int size,size1;
   cout<<"\n Enter the size of the array \n";
   cin>>size;
   size1=size+size;
   int a[size],b[size];
   cout<<"\n enter the element of array  A \n";
   for(int i=0;i<size;i++)
   {
     cin>>a[i];	
      	
   }
   cout<<"\n enter the element of array  B \n";
   for(int i=0;i<size;i++)
   {
     cin>>b[i];	
      	
   }
   mergarray m1(a,b,size);
   m1.mergtwoarray(size1);
	
}
