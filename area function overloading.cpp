#include<iostream>
using namespace std;

int area(int radius)
{
	return radius * radius * 3.14;
}

int area(int l,int w)
{
	return  l*w;
}

int main()
{
	int result=area(5);
	cout<<"\nArea of circle is "<<result<<"\n";
    int result1=area(10,5);
    cout<<"\nArea of rectangle is "<<result1<<"\n";
}
