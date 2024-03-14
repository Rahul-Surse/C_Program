#include<iostream>
#include<string.h>
using namespace std;

class stringApp
{
	char str1[90];
	public:
		stringApp(char s[])
		{
			strcpy(str1,s);
			
		}
		void performOperation()
		{
			char e;
			int len;
			cout<<"\n enter the element in the string \n";
			cin>>e;
			len=strlen(str1);
			for(int i=0;i<len;i++)
			{
				if(e==str1[i])
				{
					if(i==len)
					{
						cout<<str1[i-1]<<"\t"<<"null";
					}
					else{
						cout<<str1[i-1]<<"\t"<<str1[i+1];
					}
				}
			}
			
		}
		
	
};

int main()
{
	char s[10];
	cout<<"\n enter the string \n";
	gets(s);
	stringApp A1(s);
	A1.performOperation();
	
	
}
