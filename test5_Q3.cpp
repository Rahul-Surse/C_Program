//Q3. Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the 
//Shape class 
//with the same function that prints "Polygon is a shape". Create two other classes named Rectangle
//and Triangle having the same function 
//which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another 
//class named Square having the same function 
//which prints "Square is a rectangle".
//Now, try calling the function by the object of each of these classes.
#include<string.h>
#include<iostream>
using namespace std;

class shape
{
	public:
		void operation1()
		{
			cout<<"\n this is a shape \n";
		}

};

class polygon : public shape
{
		public:
		void operation()
		{
			cout<<"\n polygon  is a shape \n";
		}
	
};

class rectangle :public polygon
{
		public:
		void operation()
		{
			cout<<"\n rectangle is a polygon \n";
		}
};
class triangle : public polygon
{
		public:
		void operation()
		{
			cout<<"\n triangle is a polygon \n";
		}
};
class square : public rectangle
{
		public:
		void operation()
		{
			cout<<"\n square is a rectangle \n";
		}
};

int main()
{
	polygon p1;
	p1.operation1();
	p1.operation();
	
	rectangle r1;
	r1.operation();
	
	triangle t1;
	t1.operation();
	
	square s1;
	s1.operation();
	
	
	
	
	
	
}
