#include<iostream>
#include<string.h>
using namespace std;

 class power
{
	private:
		int base, index;
	public:
	  power(int b, int i)	
	  {
          base=b;
		  index=i;	  	
	  }
	
    void getpower()
    {
    	int pow=1;
    	for(int j=0;j<index;j++)
    	{
    		pow=pow*base;
		}
		cout<<pow;
	}	
};

int main()
{
	int b=2,i=2;
	power p1( b, i);
	p1.getpower();
	
}
