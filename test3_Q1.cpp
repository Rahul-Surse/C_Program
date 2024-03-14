#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;


class Isogram
{ 
   private:
   	char b[10];
   	
   	public:
   		void setstring(char a[])
   		{
   			strcpy(b,a);	
		}
		void checkstring(int len)
		{
			int flag=0;
			for(int i=0;i<len;i++)
			{
				for(int j=i+1;j<len;j++)
				{
					if(b[i]==b[j])
					{
						flag=1;
					}
				}
			}
			if(flag==1)
			{
				cout<<"\n the string not is isogram\n";
			}
			else
			{
				cout<<"\n the string is  a isogram\n";
			}
		}
	
};

int main()
{
	Isogram I1;
	char a[10];
	int len;
	cout<<"\n Enter the string \n";
	gets(a);
	len=strlen(a);
	I1.setstring(a);
	I1.checkstring(len);

	
	
	return 0;
}





