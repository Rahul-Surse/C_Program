#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	int eid,esal;
	char name[20],desig[20];
	public:
	void setdata(int id,int sal,char n[],char d[])
	{
		eid=id;
		esal=sal;
		strcpy(name,n);
		strcpy(desig,d);	
	}
	int getsal()
	{
		return esal;
	}
	void display()
	{
		cout<<eid<<"\t"<<esal<<"\t"<<name<<"\t"<<desig;		
	}
};


int main()
{
	employee e[20];
	int i,id,sal,limit;
	char n[20],d[20];
	
	cout<<"\n enter the number of employee\n";
	cin>>limit;
	

	
	for(i=0;i<limit;i++)
	{
		cout<<"\n enter the id,salary,name,designation of the employee\n";
		cin>>id>>sal>>n>>d;
		e[i].setdata(id,sal,n,d);
	}
	cout<<"\n display the detail of employe\n";
	
	for(i=0;i<limit;i++)
	{
		e[i].display();
		cout<<"\n";
	}
	
	cout<<"\n display the detail of employe having salary more than 12000\n";
		
	for(i=0;i<limit;i++)
	{
	     if(e[i].getsal()>12000)
	     {
	     	e[i].display();
	     		cout<<"\n";
		 }
	
	}
	
	
	
	
	
	
	
}
