#include<iostream>
#include<string.h>
using namespace std;

 class majority
{
	private:
		
		int a[5];
		int count;
	public:
	  majority(int b[])	
	  {
        for(int i=0;i<5;i++)
		{
		  a[i]=b[i];		
	    } 	  	
	  }
	
    void checkmajority()
    {
    	
    	for(int i=0;i<5;i++)
    	{
    		count=1;
    		for(int j=i+1;j<5;j++)
    		{
    			if(a[i]==a[j])
    			{
    				count++;
				}
			}
			if(count>=2)
			{
				cout<<"\n array is majority\n";
				break;
		    }
		}
		if(count<2)
		{
			cout<<"\n array is not majority \n";
		}
	
    
	}	
};

int main()
{
	int b[5];
	cout<<"\n enter the value of array\n";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	
	}
	majority m1(b);
	m1.checkmajority();

	
}
