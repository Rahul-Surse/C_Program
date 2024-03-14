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
	student s[5];
	for(int i=0;i<5;i++)
	{
	cout<<"\n enter roll number,name and percentage\n";
	cin>>r>>n>>p;
	s[i].setdata(r,n,p);
    }
    cout<<"\n record\n";
    for(int i=0;i<5;i++)
    {
    	s[i].show();
	}

	
	
	
	
	
	
	
	
	
}
