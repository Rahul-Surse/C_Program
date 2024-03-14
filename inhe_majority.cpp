
#include<iostream>
using namespace std;

class majority
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
class findmajority : public majority
{
	protected:
	   int count,flag=0;
	public:
	void checkmajority()
	{
		for(int i=0;i<6;i++)
        {
        	count=0;
        	for(int j=0;j<6;j++)
        	{
        		if(b[i]==b[j])
        		{
        			count++;
				}
			}
				if(count>=3)
				{
				 flag=1;
				 break;
				
				}
		}
		if(flag==1)
		{
			cout<<"\n array is  majority \n";
		}
		else
		{
			cout<<"\n array is not majority \n";
			}		
	}	
};

int main()
{
	int a[6];
	for(int i=0;i<6;i++)
	{
		cin>>a[i];
	}
	findmajority obj;
	obj.setArray(a);
	obj.checkmajority();
};

