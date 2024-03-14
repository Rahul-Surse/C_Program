//
//Example: WAP to create class name as Fibo with default constructor and initialize two values in it f1=0 and f2=1 and we 
//have one method name as void setLimit(int limit) which accept limit of series and we have one method name as void showFibo()
// which display fibonacii series.

#include<string.h>
#include<iostream>
using namespace std;


class Fibo
{
	int f1,f2,limit;
	public:
		fibo()
		{
			f1=0;
			f2=1;
			
		}
		void setlimit(int limit)
		{
			this->limit=limit;
			
			
		}
		void showfibo()
		{
		  int f3=0;
		  for(int i=0;i<limit;i++)
		  {
		  	cout<<f3<<"\t";
		  	f3=f1+f2;
		  	f1=f3;
		  }
		}
		
};
int main()
{
	int limit;
	cout<<"\n Enter the limit of fibo series \n";
	cin>>limit;
	Fibo f;
	f.setlimit(limit);
	f.showfibo();
	
	

}
