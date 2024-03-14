#include<iostream>
#include<string.h>
using namespace std;

class unionintersection
{
	private:
		int *ptr1,*ptr2,ptr3[10],k,c1=0,c2=0,c3,flag;
	
	public:
		unionintersection(int a[],int b[])
		{
			ptr1=a;
			ptr2=b;
		}
		void checkunion()
		{
			k=0;
			for(int i=0;i<5;i++)
			{
				ptr3[k]=ptr1[i];
				k++;
				c1++;
			}
		
			for(int i=0;i<5;i++)
			{
			int flag=0;
			for(int j=0;j<5;j++)
			{
				if(ptr1[i]==ptr2[j])
				{
				   flag=1;
				   break;	
				}
			}
	        if(flag==1)
	        {
	        	ptr3[k]=ptr2[i];
	        	k++;
	        	c2++;
			}
		   }
		   cout<<"\narray union \n";
		   c3=c1+c2;
		   for(int i=0;i<c3;i++)
		   {
		   	 cout<<ptr3[i]<<"\t";
		   }
	
	
	    }
		void checkintersection()
		{
			k=0;
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(ptr1[i]==ptr2[j])
					{
						ptr3[k]=ptr2[j];
						k++;
					}
				}
			}
			cout<<"\narray intersection \n";
			for(int i=0;i<k;i++)
			{
				cout<<ptr3[i]<<"\t";
			}
		}
		
};

int main()
{
	int a[5],b[5];
	cout<<"\n  enter the element of first array \n";
	for(int i=0;i<5;i++)
	{
	    cin>>a[i];
	}
	cout<<"\n  enter the element of second array \n";
	for(int i=0;i<5;i++)
	{
	    cin>>b[i];
	}
	
	unionintersection un1(a,b);
	un1.checkunion();
	un1.checkintersection();
	
	
	
	
	
	
	
	
}

