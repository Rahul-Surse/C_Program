#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	int empid,empsal;
	char empname[20],empemail[20],empaddress[20];
	
	
	public:
		    employee()
    {
        empid = 0;
        empsal = 0;
        strcpy(empname, "");
        strcpy(empemail, "");
        strcpy(empaddress, "");
    }
		employee(int id,char name[],char email[],char address[],int sal)
		{
			empid=id;
			empsal=sal;
		    strcpy(empname,name);
			strcpy(empemail,email);
			strcpy(empaddress,address);	
		}
		void showDetails()
		{
			cout<<empid<<"\t"<<empsal<<"\t"<<empname<<"\t"<<empemail<<"\t"<<empaddress<<"\n";
		}
		void sortAseDetails()
		{
			
		}
};

int main()
{
	int id,sal,limit;
	char name[20],email[20],address[20];
	cout<<"\n enter how many employee you want to enter\n";
	cin>>limit;
	employee e1[20];
	for(int i=0;i<limit;i++)
	{
	cout<<"\n enter the id of the employee \n";
	cin>>id;
   
	
	cout<<"\n enter the sal of the employee \n";
	cin>>sal;
    
	cout<<"\n enter the name of the employee \n";
	cin>>name;
   
	cout<<"\n enter the email of the employee \n";
	cin>>email;
   
	cout<<"\n enter the address of the employee \n";
	cin>>address;
	e1[i]=employee(id,name,email,address,sal);
    }

    for(int i=0;i<limit;i++)
    {

	e1[i].showDetails();
    }
	
	
}
