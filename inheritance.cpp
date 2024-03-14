#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class vehicle
{
	protected:
	   char vmodel[20];
	   int vreg,vspeed,fcapacity,vtime;
	   float fcon;
	public:
		vehicle(char f[],int b,int c,int d,int e)
		{
			strcpy(vmodel,f);
			vreg=b;
			vspeed=c;
			vtime=d;
			fcapacity=e;
			
		}
//	int fuelneeded(distance)
//	{
//		
//		
//	}
	int distancecovered()
	{
		
	}
	   
	
};

class bus:public vehicle
{
	
	
};

class truck : public vehicle
{
	//protected:
	int cweight;
	
	public:
	truck(int a,char f[],int b,int c,int d,int e) :: vehicle(char f[],int b,int c,int d,int e)
	{
			cweight=a;

    }
    void show()
    {
    	cout<<cweight;
	}
    


};

int main()
{
	int a,b,c,d,e;
	char f[20];
	float g;
	
	cout<<"\n Enter the cargo weight\n";
	cin>>a;
	cout<<"\n Enter the vehicle model\n";
	cin>>f;
	cout<<"\n Enter the vehicle registration number\n";
	cin>>b;
	cout<<"\n Enter the vehicle speed\n";
	cin>>c;
	cout<<"\n Enter the vehicle time needed\n";
	cin>>d;
	cout<<"\n Enter the vehicle fuel capacity\n";
	cin>>e;
	cout<<"\n Enter the passenger in bus\n";
	cin>>f;
	truck obj(a,f,b,c,d,e);
	
	return 0;
}
