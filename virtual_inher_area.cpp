#include<string.h>
#include<iostream>
using namespace std;

class Area
{
	protected:
		float pi,r,result;
		int l,b,result1;
	public:
		Area(float r1,float pi1)
		{
			r=r1;
			pi=pi1;
		}
		 Area(int l1,int b1)
		 {
		 	l=l1;
		 	b=b1;
		 }
	virtual void calArea()=0;
};
class circle : public Area
{
	
	public:
	circle(float r1,float pi1):Area (r1,pi1)	
    {
    }
	 void calArea()
	{
		result=0;
		result=pi*r*r;
	cout<<"\n area of circle is \n"<<result;	

	}

	
};
class Reactangle : public Area
{
	public:
	  Reactangle(int l1,int b1) : Area(l1,b1)
	  {
	  }
	void calArea()
    {
    	
		result1=l*b;
		cout<<"\narea of reactangle is \n"<<result1;
    }
};


int main()
{
	float r1,pi1;
	int l1,b1;
	l1=5;
	b1=5;
	r1=10;
	pi1=3.14;
	circle a1(r1,pi1);
	a1.calArea();
	Reactangle R1(l1,b1);
	R1.calArea();


	
}
