#include<iostream>
#include<string.h>
using namespace std;

class book
{
	private:
	int bid;
	char bname[20],bauthor[40],bpubli[50];
    float bprice;	
    
    public:
    	void setdata(int id,char n[],char a[],char p[],float p1)
    	{
    		bid=id;
    		bprice=p1;
    		strcpy(bname,n);
    	    strcpy(bauthor,a);
    	    strcpy(bpubli,p);
        }
        char *getp()
        {
        	return bpubli;
		}
        char *geta()
        {
             return bauthor;        	
		}
       
        char *getn()
        {
        	return bname;
		}
        int getid()
        {
        	return bid;
		}
        float getp1()
        {
        	return bprice;
		}
        void show()
        {
           cout<<"\n"<<bid<<"\t"<<bname<<"\t"<<bauthor<<"\t"<<bpubli<<"\t"<<bprice;
		}	
};

int main()
{
	book b[10];
	int id,z=0,count=0,choice,flag=0,f1,f2,f3,f4,f5,f6,f7,f8,f9;
	int count1,count2,count3,count4,count5,count6;
	char n[20],a[20],p[20];
	float p1;
	book t[10];
	
	
	
	do{
		
	  cout<<"\ncase:1.add all books \n";
	  cout<<"\ncase:2.display all book details \n";
	  cout<<"\ncase:3.display book details who price range between 100 to 500 \n";
	  cout<<"\ncase:4.search book details by\n";
	  cout<<"\ncase:5.update book details\n";
	  cout<<"\ncase:6.deletee book details usingg\n";
	  cout<<"\ncase:7.count book details\n";
	  cout<<"\ncase:8.sort book\n";
	  cout<<"\ncase:9.display second highest book price details\n";
	  cout<<"\ncase:10.exit the code\n"; 
		
	  cout<<"\n enter the choice\n";
	  cin>>choice;
	  
	  switch(choice)
	  {
	  	case 1:
	  		if(count==10)
	  		{
	  			cout<<"\n no space to add book \n";
			}else{
				cout<<"\n enter the  book id, name, author, publication, price\n";
				cin>>id>>n>>a>>p>>p1;
				b[count].setdata(id,n,a,p,p1);
				count++;
			}
	  		break;
	  	
	  	case 2:
	  	     cout<<"\n avialable books \n";
	  	     for(int i=0;i<count;i++)
	  	     {
	  	        b[i].show();	
			 }
	  		break;
	  	
	    case 3:
	    	for(int i=0;i<count;i++)
	    	{
	    		if((b[i].getp1()>100) && (b[i].getp1()<500) )
	    		{
	    			b[i].show();
				}
	    		
			}
	  		break;	
	  	
	  	case 4:
	  		int opt;
	  		cout<<"\n case:1 search book by id\n ";
	  		cout<<"\n case:2 search book by name\n ";
	  		cout<<"\n case:3 search book by price\n ";
	  		cout<<"\n case:4 search book by auther\n ";
	  		cout<<"\n enter the choice \n";
	  		cin>>opt;
	  		
	  		switch(opt)
	  		{
	  		
	  		    case 1:
	  		    	int sid;
					  
	  		    	cout<<"\n enter the id of book\n";
	  		    	cin>>sid;
	  		    	for(int i=0;i<count;i++)
	  		    	{
	  		    		if(sid==b[i].getid())
	  		    		{
	  		    			b[i].show();
	  		    			flag=1;
					    }		
					  }
					  if(flag==0)
					  {
					  	cout<<"\n id not found\n";
					  }
	                      break; 
						  
						         
		    	case 2:
		    		char sname[20];
		    		cout<<"\n enter the name of book \n";
		    		cin>>sname;
		    		for(int i=0;i<count;i++)
		    		{
		    			if(strcmp(sname,b[i].getn())==0)
		    			{
		    				b[i].show();
						}
					}
		    		
	  	           	break;
			  	case 3:
			  		float sp;
			  		cout<<"\n enter the book by price \n";
			  		cin>>sp;
			  		for(int i=0;i<count;i++)
			  		{
			  			if(b[i].getp1()==sp)
			  			  b[i].show();
					  }
	  		break;
			  	case 4:
			  		char sa[20];
			  		int flag1=0;
			  		cout<<"\n enter the name of auther \n";
			  		cin>>sa;
			  		for(int i=0;i<count;i++)
			  		{
			  			if(strcmp(sa,b[i].geta())==0)
			  			{
			  				b[i].show();
							flag=1;		  					  					  				
					    } 
						if(flag1==0)
						{
							cout<<"\n book not found \n";
						}			
					}
	  		break;
		    }
	  		break;
	  	
	  	case 5:
	  		int opt2;
	  		cout<<"\n case:1 update book by id\n ";
	  		cout<<"\n case:2 update book by name\n ";
	  		cout<<"\n case:3 update book by price\n ";
	  		cout<<"\n case:4 update book by auther\n ";
	  		cout<<"\n enter the choice \n";
	  		cin>>opt2;
	  		switch(opt2)
	  		{
	  			
	  		    case 1:
	  		    	int uid;
					  
	  		    	cout<<"\n enter the id of book\n";
	  		    	cin>>uid;
	  		    	for(int i=0;i<count;i++)
	  		    	{
	  		    		if(uid==b[i].getid())
	  		    		{
	  		    			cout<<"\n enter the  book id, name, author, publication, price\n";
				            cin>>id>>n>>a>>p>>p1;
				            b[i].setdata(id,n,a,p,p1);
	  		    			
					    }		
			        }
			        break;
			    case 2:
					char uname[20];
		    		cout<<"\n enter the name of book \n";
		    		cin>>uname;
		    		for(int i=0;i<count;i++)
		    		{
		    			if(strcmp(uname,b[i].getn())==0)
		    			{
		    				cout<<"\n enter the  book id, name, author, publication, price\n";
				            cin>>id>>n>>a>>p>>p1;
				            b[i].setdata(id,n,a,p,p1);
						}
					}
	  	           	break;
			 	case 3:
			  		float up;
			  		cout<<"\n enter the book price \n";
			  		cin>>up;
			  		for(int i=0;i<count;i++)
			  		{
			  			if(b[i].getp1()==up)
			  			{
			  				cout<<"\n enter the  book id, name, author, publication, price\n";
				            cin>>id>>n>>a>>p>>p1;
				            b[i].setdata(id,n,a,p,p1);
						  }
					  }
	  	        	break;
				case 4:
			  		char ua[20];
			  		cout<<"\n enter the name of auther \n";
			  		cin>>ua;
			  		for(int i=0;i<count;i++)
			  		{
			  			if(strcmp(ua,b[i].geta())==0)
			  			{
			  				cout<<"\n enter the  book id, name, author, publication, price\n";
				            cin>>id>>n>>a>>p>>p1;
				            b[i].setdata(id,n,a,p,p1);		  					  					  				
					    }  			
					}
	  		break;
	  	    }
	  		break;
	  	
	  	case 6:
	  		int opt3;
	  		cout<<"\n case:1 delete book by id\n ";
	  		cout<<"\n case:2 delete book by name\n ";
	  		cout<<"\n case:3 delete book by price\n ";
	  		cout<<"\n case:4 delete book by publication\n ";
	  		cout<<"\n case:5 delete book by auther\n ";
	  		cout<<"\n enter the choice \n";
	  		cin>>opt3;
	  		switch(opt3)
	  		{
	  			case 1:
	  				int did;
	  				f1=0;
	  				cout<<"\n enter the id \n";
	  				cin>>did;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(did==b[i].getid())
	  					{
	  						for(int k=i;k<count;k++)
	  						{
	  							b[k]=b[k+1];		
							}
	  						count--;
	  						f1++;
					    }
					}
					if(f1==1)
					{
						cout<<"\n book deleted \n";
					}else {
						cout<<"\n book of that price not found \n";
					}
	  				break;
	  			
	  			case 2:
	  				char dn[20];
	  				f2=0;
	  				cout<<"\n enter the name deleting book name \n";
	  				cin>>dn;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(dn,b[i].getn())==0)
	  					{
	  						for(int k=i;k<count;k++)
	  						{
	  							b[k]=b[k+1];		
							}
	  						count--;
	  						f2++;
					    }
					}
					if(f2==1)
					{
						cout<<"\n book deleted \n";
					}else {
						cout<<"\n book of that name not found \n";
					}
	  				break;	
	  				
	  			case 3:
	  				float dp1;
					f3=0;
	  				cout<<"\n enter the name deleting by book price \n";
	  				cin>>dp1;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(dp1==b[i].getp1())
	  					{
	  						for(int  k=i;k<count;k++)
	  						{
	  							b[k]=b[k+1];		
							}
	  						count--;
	  						f3++;
					    }
					}
					if(f3==1)
					{
						cout<<"\n book deleted \n";
					}else {
						cout<<"\n book of that name not found \n";
					}
	  				break;	
	  				
	  			case 4:
	  				char dp[20];
	  				f4=0;
	  				cout<<"\n enter the name deleting book by publication name \n";
	  				cin>>dp;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(dp,b[i].getp())==0)
	  					{
	  						for(int k=i;k<count;k++)
	  						{
	  							b[k]=b[k+1];		
							}
	  						count--;
	  						f4++;
					    }
					}
					if(f4==1)
					{
						cout<<"\n book deleted \n";
					}else {
						cout<<"\n book of that publication name not found \n";
					}
	  				break;
					  
				case 5:
	  				char da[20];
	  				f5=0;
	  				cout<<"\n enter the name deleting book  author name \n";
	  				cin>>dp;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(da,b[i].geta())==0)
	  					{
	  						for(int k=i;k<count;k++)
	  						{
	  							b[k]=b[k+1];		
							}
	  						count--;
	  						f5++;
					    }
					}
					if(f5==1)
					{
						cout<<"\n book deleted \n";
					}else {
						cout<<"\n book of that auther name not found \n";
					}
	  				break;			
	  				
	  		}
	  		
	  		break;
	  	
	  	case 7:
	  		int opt4;
	  		f6=0;
	  		cout<<"\n case:1 count book by name\n ";
	  		cout<<"\n case:2 count book by price\n ";
	  		cout<<"\n case:3 count book by publication\n ";
	  		cout<<"\n case:4 count book by auther\n ";
	  		cout<<"\n enter the choice \n";
	  		cin>>opt4;
	  		switch(opt4)
	  		{
	  			case 1:
				    char cn[20];
	  				f6=0;
	  				count1=0;
	  				cout<<"\n enter the name of book \n";
	  				cin>>cn;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(cn,b[i].geta())==0)
	  					{
	  						count1++;
	  						f6++;
					    }
					}
				   cout<<"\n the count of the book is \n ";
				   cout<<count1;
				   if(f6==0)
				   {
				   	cout<<"\n no book found of that number \n";
				   }
	  				break;
	  				
	  			case 2:
				    float p2;
	  				f7=0;
	  				count2=0;
	  				cout<<"\n enter the price of book \n";
	  				cin>>p2;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(p2==b[i].getp1())
	  					{
	  						count2++;
	  						f7++;
					    }
					}
				   cout<<"\n the count of the book is \n ";
				   cout<<count2;
				   if(f7==0)
				   {
				   	cout<<"\n no book found of that price \n";
				   }
	  				break;
	  				
	  		    case 3:
				    char cp[20];
	  				f8=0;
	  				count3=0;
	  				cout<<"\n enter the name of book publication \n";
	  				cin>>cp;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(cp,b[i].getp())==0)
	  					{
	  						count3++;
	  						f8++;
					    }
					}
				   cout<<"\n the count of the book is \n ";
				   cout<<count3;
				   if(f8==0)
				   {
				   	cout<<"\n no book found of that publication \n";
				   }
	  				break;
	  				
	  				
	  		    case 4:
				    char ca[20];
	  				f9=0;
	  			    count4=0;
	  				cout<<"\n enter the name of author  book \n";
	  				cin>>ca;
	  				for(int i=0;i<count;i++)
	  				{
	  					if(strcmp(ca,b[i].geta())==0)
	  					{
	  						count4++;
	  						f9++;
					    }
					}
				   cout<<"\n the count of the book is \n ";
				   cout<<count4;
				   if(f9==0)
				   {
				   	cout<<"\n no book found of that authoer  \n";
				   }
	  				break;
			  }
	  		break;
	  	
	  	case 8:
	  	    int opt5;
	  		cout<<"\n case:1 arrenge the book in assending order by id \n ";
	  		cout<<"\n case:2 arrange the book in dessending order by price\n ";
	  		cout<<"\n Enter the choice \n";
	  		cin>>opt5;
	  		switch(opt5)
	  		{
	  			case 1:
	  				for(int i=0;i<count;i++)
	  				{
	  				    for(int j=i+1;j<count;j++)
	  				    {
	  				    	if(b[i].getid()>b[j].getid())
	  				    	{
	  				    		t[i]=b[i];
	  				    		b[i]=b[j];
	  				    		b[j]=t[i];
							}
	  				     }
					  }
					  cout<<"\n book in assending order by id \n";
					  for(int i=0;i<count;i++)
					   {
					   	  b[i].show();					   	
					   }
					   break;
				case 2:
	  				for(int i=0;i<count;i++)
	  				{
	  				    for(int j=i+1;j<count;j++)
	  				    {
	  				    	if(b[i].getp1()<b[j].getp1())
	  				    	{
	  				    		t[i]=b[j];
	  				    		b[j]=b[i];
	  				    		b[i]=t[j];
							}
	  				     }
					  }
					  cout<<"\n book in dessending order by price \n";
					  for(int i=0;i<count;i++)
					   {
					   	  b[i].show();					   	
					   }
                    break;					
			  }
	  		break;
	  	
	  	case 9:
	  			for(int i=0;i<count;i++)
	  				{
	  				    for(int j=i+1;j<count;j++)
	  				    {
	  				    	if(b[i].getp1()<b[j].getp1())
	  				    	{
	  				    		t[i]=b[j];
	  				    		b[j]=b[i];
	  				    		b[i]=t[j];
							}
	  				     }
					  }
					  cout<<"\n book having second highest by price is \n";
					   	  b[2].show();					   	
							 break;
	  	
	  	case 10:
	  		cout<<"\n Exit \n";
	  		break;
	  	
	  	default :
	  		cout<<"\n invalide operation \n";	  	
	  }
		cout<<"\n do you want to continue(1-yes/0-no) ?";
		cin>>z;
	} while(z==1);	
}
	
