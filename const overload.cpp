#include<iostream>
#include<string.h>
using namespace std;

class Area
{
	float pi;
	public :
		Area(float r)
		{
			cout<<"\n area of circle is "<<r*r*3.14f;
	    }
		Area(int len,int bret)
		{
			cout<<"\n area of rectangle is"<<len*bret;
		}
		Area(float base,float height)
		{
			cout<<"\n area of triangle is"<<base*height*0.5;
		}s
};

int main()
{
	float r,base,height;
	int len,bret;
	cout<<"\n enter the radius of circle\n";
	cin>>r;
	Area A1(r);
	cout<<"\n enter the lenght and breadth of rectangle ";
	cin>>len>>bret;
	Area A2(len,bret);
	cout<<"\n enter the base and height of the triangle";
	cin>>base>>height;
	Area A3(base,height);
}
