#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int eid,esal;
	char ename[20],eemail[20],eaddress[20];
	public:
		employee(int id,char name[],char email[],char address[],int sal)
		 {
		 	eid=id;
		 	esal=sal;
		 	strcpy(ename,name);
		 	strcpy(eemail,email);
		 	strcpy(eaddress,address);
		} 
		 void showdetails()
		 {
		 	cout<<"\n display employee details \n";
		 	cout<<eid<<"\t";
		 	cout<<esal<<"\t";
		 	cout<<ename<<"\t";
		 	cout<<eemail<<"\t";
		 	cout<<eaddress<<"\t";
		 	
		 	
		 }
		 void sortascdetails()
		 {
		 	
		 }
};
int main()
{
	int id,sal,count;
	char name[20]; 
	char email[20];
	char address[20];
	cout<<"\n enter the number of employee \t";
	cin>>count;
	employee e1[20];
	for(int i=0;i<count;i++)
	{
	
	cout<<"\n enter the ID of the employee \t";
	cin>>id;
	cout<<"\n enter the SALARY of the employee \t";
	cin>>sal;
	cout<<"\n enter the NAME of the employee \t";
	cin>>name;
	cout<<"\n enter the EMAIL of the employee \t";
	cin>>email;
    cout<<"\n enter the ADDRESS of the employee \t";
	cin>>address;
	e1[i](id,name,email,address,sal);
    }
    
	for(int i=0;i<count;i++)
	{
		employee e1[i](id,name,email,address,sal);
		e1[i].showdetails();
	}
   	
}
