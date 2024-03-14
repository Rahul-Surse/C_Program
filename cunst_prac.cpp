#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	int i,s;
	char n[10],em[10],add[10];
	public:
	employee(int id,char name[],char email[],char address [],int sal)
	{
		i=id;
		s=sal;
		strcpy(n,name);
		strcpy(em,email);
		strcpy(add,address);
	}
	void ShowDetails()
	{
		cout<<"\n id\t name\t email\t address\t salary\n";
		cout<<"\n"<<i<<"\t"<<n<<"\t"<<em<<"\t"<<add;
	}
	void sortAscDetails()
	{
		
	}
	
};

int main()
{
	int id,sal;
	char name[10],email[10],address[10];
	cout<<"\n enter the id,salaray,name,email,address of the employee";
	cin>>id>>sal>>name>>email>>address;
    employee e1(id,name,email,address,sal);	
    e1.ShowDetails();
}




