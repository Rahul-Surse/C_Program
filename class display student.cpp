#include<iostream>
#include<string.h>
using namespace std;



class student
{
	int rno;
	char name[20];
	float per;
	
	public:
    void setdata(int r,char n[], float p)
    {
    	rno=r;
    	strcpy(name,n);
    	per=p;	
	}
	
	void show()
	{
		cout<<"\n"<<rno<<"\t"<<name<<"\t"<<per;
	}
};

int main()
{
	int r;
	char n[20];
	float p;
	student s1,s2;
	cout<<"\n enter roll number,name and percentage";
	cin>>r>>n>>p;
	s1.setdata(r,n,p);
	cout<<"\n enter roll number,name and percentage";
	cin>>r>>n>>p;
	s2.setdata(r,n,p);
	s1.show();
	s2.show();
	
	
	
	
	
	
	
	
	
}
