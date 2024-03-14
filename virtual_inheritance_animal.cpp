#include<string.h>
#include<iostream>
using namespace std;

class Animal
{
   public:
   virtual void makesound()=0;	
};
class dog:public Animal
{
	public:
	void makesound()
	{
		cout<<"bark\n";
		
	}
	
};
class cat:public Animal
{  
    public:
    	
	void makesound()
	{
		cout<<"mau\n";
	}
	
};

int main()
{
	dog d;
	d.makesound();
	cat c;
	c.makesound();
	
}







