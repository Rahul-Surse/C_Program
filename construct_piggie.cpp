#include<iostream>
#include<string.h>
using namespace std;

class AddAmount
{
	int amount,famount;
	public:
		AddAmount()
		{
		    amount=50;
		    
		}
		void get()
		{
			cout<<"Amount Is :"<<amount;
		}
		AddAmount(int a)
		{
			cout<<"Amount Is :"<<amount;	
			famount =amount+a;
		  cout<<"\nAdded Amount Is :"<<famount;			
		}
};
int main()
{
	int a;
	cout<<"\n enter the amount you want to add in piggie \n";
	cin>>a;
	AddAmount b;
	b.get();
	AddAmount a1(a);
	
	
	
}
