//Q2. create class name as StringOperation with virtual function name as performOperation()  and create its Two child classes
//    name as MaxRepetative , WordReverse. We need to inherit the Value class in MaxRepetative , WordReverse and override the virtual function 
//	in it write the logic

#include<string.h>
#include<iostream>
using namespace std;

class StringOperation
{
	protected:
		char str[10];
	public:
		void setstring(char str1[])
		{
			strcpy(str,str1);
			
		}
		virtual performOperation()=0;
	
};

class MaxRepetative : public StringOperation
{
	public:
		
	virtual performOperation()
	{
		int len,max,max1,count;
		len=strlen(str);
		char rep;
		max=0;
		for(int i=0;i<len;i++)
		{
			max1=0;
			for(int j=0;j<len;j++)
			{
				if(str[i]==str[j])
				{
					max1++;
				}
			}
			if(max1>max)
			{
				max=max1;
				rep=str[i];
			}
		}
		cout<<"\n the max repeat letter is\n";
		cout<<rep<<"\n";
		
	}
	
};

class WordReverse : public StringOperation
{
	protected:
		char s[10];
	public:
		void setstring(char str1[])
		{
			strcpy(s,str1);
		}
		virtual performOperation()
		{
			char temp;
			int len,mid,end;
			len=strlen(s);
			end=len-1;
			mid=len/2;
			for(int i=0;i<mid;i++)
			{
				temp=s[i];
				s[i]=s[end];
				s[end]=temp;
				end--;
			}
			cout<<"\n the reverse word is :\n";
			cout<<s;
		}
};

int main()
{
	char str1[10];
	cout<<"\n enter the string \n";
	gets(str1);
	MaxRepetative m1;
	m1.setstring(str1);
	m1.performOperation();

    WordReverse w1;
    w1.setstring(str1);
    w1.performOperation();
	
	
	
}
