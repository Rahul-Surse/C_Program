#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class vehicle
{
	protected:
	   char vmodel[20];
	   int vreg,vspeed,fcapacity,vtime,fn,dist;
	   float fcon;
	public:
		vehicle(char f[],int b,int c,int d,int g)
		{
			strcpy(vmodel,f);
			vreg=b;
			vspeed=c;
			vtime=d;
			fcapacity=g;
			
		}
		
	int distancecovered()
	{

		 dist=vspeed*vtime;
		
	}
	int fuelneeded()
	{
	
			fn=dist/fcapacity;
	  	
		
	}
	void show()
	{
		cout<<"\t"<<vmodel<<"\t"<<vreg<<"\t"<<vspeed<<"\t"<<vtime<<"\t"<<fcapacity<<"\t"<<fn<<"\t"<<dist<<"\t";
	}

	   
	
};

class bus:public vehicle
{
	protected:
		int pass;
		
		public:
		bus(char u[],int p,int q,int r,int s,float v) : vehicle(u, q, r, s, v)
    	{
	  		pass=p;

        }
        void show1()
        {
        	cout<<"\n passenger in the bus \n";
        	cout<<pass;
	    }
			
	
	
};

class truck : public vehicle
{
	protected:
	int cweight;
	
	public:
	truck(int a,char f[],int b,int c,int d,float g) : vehicle(f, b, c, d, g)
	{
			cweight=a;

    }
    void show1()
    {
    	cout<<"\n the cargo weight id \n";
    	cout<<cweight;
	}
    


};

int main()
{
	int a,b,c,d,e,p,q,r,s,t;
	char f[20],u[20];
	float g,v;
	
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
	cin>>g;

	truck obj(a,f,b,c,d,g);
	obj.distancecovered();
	obj.fuelneeded();
	obj.show1();
	obj.show();
	cout<<"\n Enter the passenger in bus\n";
	cin>>p;
	cout<<"\n Enter the vehicle model\n";
	cin>>u;
	cout<<"\n Enter the vehicle registration number\n";
	cin>>q;
	cout<<"\n Enter the vehicle speed\n";
	cin>>r;
	cout<<"\n Enter the vehicle time needed\n";
	cin>>s;
	cout<<"\n Enter the vehicle fuel capacity\n";
	cin>>v;

	bus obj2(p,u,q,r,s,v);
	
	return 0;
}
