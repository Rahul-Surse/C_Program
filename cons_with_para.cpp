#include<iostream>
#include<string.h>
using namespace std;

class rectangle
{
	
	int length,breadth,area;
	
	public :
	rectangle()
	{
		length=2;
		breadth=4;
	}
	
	public:
	void Show()
	{
		cout<<"its Area"<<length*breadth;
	}
	
};

int main()
{
	rectangle obj1;
	obj1.Show();
	

	return 0;
}
