//		Q 3. Write a cpp program to create a class name as Employee using parameterized constructor to accept id, 
//name, email, sal and
//				create function name as getFunction() to implement the logic.
//				
//				Note : - Display Second Highest Salary Employee Record.
#include<iostream>
#include<string.h>
using namespace std;
class  employee
{
	int i,s;
	char n[10],mail[10];
	public:
		employee()
		{
		}
		employee(int id,char name[],char email[],int sal)
		{
			i=id;
		    s=sal;
		    strcpy(n,name);
    		strcpy(mail,email);
			
		}
	    void getsal()
	    {
	    	
		}
	
};
int main()
{
	int id,sal;
	char name[10],email[10];
	employee e[10];
	for(int i=0;i<3;i++)
	{
		
	cout<<"\n Enter the id, name, email,salary, of the employee\n";
   	cin>>id>>name>>email>>sal;
    e[i]=employee(id,name,email,sal);
    }
    int max,count=0;
    for(int i=0;i<3;i++)
    {
    	for(int j=i+1;i<3;i++)
    	{
    		if(e[i].getsal()>e[j].getsal())
    		{
    			max=e[i].getsal();0
    			count++;
			}
			if(count==2)
			{
				cout<<e[i].getsal();
			}
		}
	}


    
    
    
    
}
