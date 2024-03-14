#include<iostream>
#include<string.h> 
using namespace std;
class unionintersection 
{
	int *ptr1,*ptr2;
	public:
		unionintersection(int a[],int b[])
		{
			ptr1=a;
			ptr2=b;	
		}
		void checkintersection()
		{
			cout<<"\n hii \n";
			int size=0;
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(ptr1[i]==ptr2[j])
					{
						cout<<ptr1[i]<<"\t";
					}
				}
			}
		}
	    void checkunion()
	    {
	    	int c[10],size=10,y=0,flag;
	    	for(int i=0;i<5;i++)
	    	{
	    		
				c[i]=ptr1[i];
			
			}
		    
		        int i=5;
		        
				for(int j=0;j<5;j++)
				{
					flag=0;
					for(int k=0;k<5;k++)
					{
						if(ptr2[j]==ptr1[k])
						{
						   flag=1;
						   size--;
						   
						}
					}
					if(flag==0)
					{
						c[i]=ptr2[j];
						i++;
						
					}
				
				}
				
			
			cout<<"\n the union array is \n";
			for(int i=0;i<size;i++)
			{
				cout<<c[i]<<"\t";
			}
	    	
		}
};

int main()
{
	int a[5],b[5];
	cout<<"\n enter the first array \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\n enter the second  array \n";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	unionintersection u1(a,b);
    u1.checkunion();
    u1.checkintersection();
    
	
	
}
