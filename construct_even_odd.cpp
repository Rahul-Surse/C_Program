#include<iostream>
#include<string.h>
using namespace std;

class OccurenceApp
{
	public :
		OccurenceApp(int a[])
		{
			int count1=0;
			int count2=0;
			for(int i=0;i<5;i++)
			{
				if(a[i]%2==0)
				{
					count1++;
				}
				if(a[i]%2!=0)
				{
					count2++;
				}
			}
			cout<<"\n the count of even number "<<count1;
			cout<<"\n the count of odd number "<<count2;
		}
		OccurenceApp(char b[],char c[])
		{
			int count1=0,count2=0;
			for(int i=0;i<5;i++)
			{
				
				if(b[i]==('a')||b[i]==('e')||b[i]==('e')||b[i]==('o')||b[i]==('u'))
				{
					count1++;
				}
				else 
				{
					count2++;
				}
			}
			cout<<"\n the count of vowels\n"<<count1;
			cout<<"\n the count of consonent"<<count2;	
			int count3=0,count4=0,count5=0;
			for(int i=0;i<c[i]!='\0';i++)
			{
				
				if((c[i]>=('a'))&&(c[i]<=('z')))
				{
					count3++;
			    }
			    else if(c[i]>='1'&&c[i]<='9')
				{
					count4++;
				}
				else 
				{
					count5++;
				}
			}
			
			cout<<"\n count of alphabets \n"<<count3;
			cout<<"\n count of digit\n"<<count4;
			cout<<"\n count of special character\n"<<count5;	
			}
		
};

int main()
{
	char b[20];
	cout<<"\n enter the B string \n";
	gets(b);
	char c[20];
	cout<<"\n enter the C string \n";
	gets(c);
	OccurenceApp O1(b,c);
	int a[5];
	cout<<"\n Enter the element of Array\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	OccurenceApp O2(a);


}

