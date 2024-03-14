#include<iostream>
#include<string.h>
#include<conio.h>

class student
{
	private : 
	
	int rn,mark[5];
	char name[20];
	
	public:
	void setdata(int r,char n[],int m[])
	{
		rn=r;
		strcpy(name,n);
		for(int i=0;i<5;i++)
		{
			mark[i]=m[i];
		}
		
		
	}
	
	void display()
	{
		printf("\n rno\t name\t percentage\n");
	}
};


int main()
{
	int r,m;
	char n[20];
	printf("\nenter the roll number,name,mark of student\n");
	scanf("%d%s%d ",&r,&n,&m);
	student s1;
	s1.setdata(r,n[],m);
	s1.show();
	
	
	
}
