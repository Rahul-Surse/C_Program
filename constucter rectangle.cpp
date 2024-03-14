#include<iostream>
#include<string.h>
using namespace std;

class rectangle
{
	
	int len,bret,area;
	public :
	  rectangle()
	  {
	    len=0;
		bret=0;	
	  }
	 void setarea(int l,int b)
	 {
	 	len=l;
	 	bret=b;
	 }
	 void showarea()
	 {
	 	area=len*bret;
	 	cout<<area;
	 }	
};

int main()
{
	rectangle r1;
	int l,b;
	r1.setarea(10,20);
	r1.showarea();
	return 0;
}
