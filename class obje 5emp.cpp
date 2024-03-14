#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	int eid,esal;
	char ename[20], edsig[20];
	
	public:
	void setData(int id,int sal,char n[],char d[])
	{
		eid=id;
		esal=sal;
		strcpy(ename,n);
		strcpy(edsig,d);
	}
	
	
	void display()
	{
		cout<<eid<<"\t"<<esal<<"\t"<<ename<<"\t"<<edsig<<"\n";
	}
	
	
};


int main()
{
	employee e[20];
		int id;
		int sal;
		char n[90];
		char d[90];
		int limit;
		int i;
	
	
	cout<<"\n enter how many employee details you want to enter \n";
	cin>>limit;
	for(i=0;i<limit;i++)
	{
	
	cout<<"enter the employee id, salary, name,designation\n";
	cin>>id>>sal>>n>>d;
	e[i].setData(id,sal,n,d);
	
    }
    
    cout<<"\n details of the employee\n";
    for(i=0;i<limit;i++)
    {
    	
    	e[i].display();
	}
}
