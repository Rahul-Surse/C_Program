#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	private:
	int empid,empcontact;
	char empname[20],empmail[20];
	int empsalary;
	
	public:
		void setdata(int id,int con,char n[],char m[],int s)
		{
			empid=id;
			empcontact=con;
			strcpy(empname,n);
			strcpy(empmail,m);
			empsalary=s;	
		}
		
		int getid()
		{
			return empid;
		}
		
		char getn()
		{
			return empname[20];
		}
		
		char getm()
		{
			return empmail[20];
		}
		
		int gets()
		{
			return empsalary;
		}
		void show()
		{
			cout<<empid<<"\t"<<empcontact<<"\t"<<empname<<"\t"<<empmail<<"\t"<<empsalary<<"\n";
		}
};

int main()
{
	int id,con;
	char n[20],m[20],nam[20];
	int s,temp,flag=0,q=0;
	int choice,limit=0;
	employee e[5];
		do {
        // Display menu
        cout<<"\n Menu:\n";
        cout<<"\n1. add employee detail\n";
        cout<<"\n2. display all employ detail\n";
        cout<<"\n3. search employ by id then find or not\n";
        cout<<"\n4. update employee detail by name\n";
        cout<<"\n5. delete employee detail by mail\n";
        cout<<"\n6. display list count of the employee in company\n";
        cout<<"\n7. display list the employee in assendin order of employee salary\n";
        cout<<"\n8. display the employee detail in highest salary\n";
        cout<<"\n9. display details in minimum salary is 10000 to maximum salaray is 60000.";
        cout<<"\n10. Exit\n";
	
	   cout<<"\n Enter the choice number \n";
	   cin>>choice;
	  
	   
	   switch(choice)
	   {
	   	   case 1:
	   	   	 cout<<"How many data do you want to add:\n";
	   	   	 cin>>limit;
	   	   	 for(int i=0; i<limit; i++){
	   	   	 	cout<<"\n enter the id,con,nam,mail, and salary\n";
	   	        cin>>id>>con>>n>>m>>s;
	   	        e[i].setdata(id,con,n,m,s);
	   	        	q++;
				}
			
	   	      break;
	   	      
	   	  case 2:
	   	  	if(q==0)
	   	  	{
	   	  		cout<<"\n data not found\n";
		    }else{
			
			  	for(int j=0;j<limit;j++)
			  	{
			  	  e[j].show();	
			    }
			}
	   	        break;
	   	  case 3:
	   	  
	   	  	cout<<"\n enter the id of the employe\n";
	   	  	cin>>temp;
	   	    for(int k=0;k<limit;k++)
	   	    {  
	   	       if ((e[k].getid())== temp)
				  {
                    flag=1;				  
				  	break;
				  }	
	   	    }
	   	    
	   	    if(flag==1)
	   	    {
	   	    	cout<<"\n find \n";
	   	    }
	   	    else
	   	    {
	   	    	cout<<"\n not found \n";
			}
			   break;
			   
		case 4:
			
			cout<<"\n enter the name of employe\n";
			cin>>nam;
			for(int k=0;k<limit;k++)
			{
				if((e[k].getn())==nam[20])
				{
				cout<<"\n enter the id,con,nam,mail, and salary\n";
	   	        cin>>id>>con>>n>>m>>s;
	   	        e[k].setdata(id,con,n,m,s);	
				}				
			}
				break;
		
		case 5:
			
			char ml[20];
			cout<<"\n enter the mail of employe\n";
			cin>>ml;
			for(int k=0;k<limit;k++)
			{
				if((e[k].getm())==ml[20])
				{
				cout<<"\n enter the id,con,nam,mail, and salary\n";
	   	        cin>>id>>con>>n>>m>>s;
	   	        e[k].setdata(id,con,n,m,s);
				}				
			}
				break;
				
		case 6:
			break;
			
//		case 7:
//			employee f[20].setdata(id,con,n,m,s);
//			cout<<"\n Assending order of employee according salary\n";
//			for(int i=0;i<limit;i++)
//			{
//				for(int j=i+1;j<limit;j++)
//				{
//					if(e[i].gets()>e[j].gets())
//					{
//						f[i].setdata(id,con,n,m,s)=e[i].setdata(id,con,n,m,s);
//					}
//				}
//					
//				}
//				
//				
//			}
//			
//			
//			
//			
//			
//			break;
	   }
	   
	
	
	
	
}while(choice!=12);
 return 0;
 }


















