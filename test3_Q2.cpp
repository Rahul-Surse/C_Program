#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class palindromeApp
{
	private:
		
		public:
			void setdata()
			{
				
			}
		    void checkPalindromeArray(int b1[])
			{
				int b[5],flag=0;
			  for(int i=0;i<5;i++)
			  {
			  	b[i]=b1[i];	
			  }
			  int temp, end,mid;
			  mid=5/2;
			  end=4;
			  for(int i=0;i<mid;i++)
			  {
			  	temp=b1[i];
			  	b1[i]=b1[end];
			  	b1[end]=temp;
			  	end--;
			  }
			for(int i=0;i<5;i++)
			{
				if(b[i]!=b1[i])
				{
					flag=1;
				}
			}
			if(flag==1)
			{
				cout<<"\n not a palindrome array \n";
			}
			else 
			{
				cout<<"\n it is a palindrome array";
			}
				
			}
			void checkPalindromeString(char a1[])
			{
				char a[10];
				strcpy(a,a1);
				
				int count=0,flag=1;
				for(int i=0;a1[i]!='\0';i++)
				{
					count++;
				}
				cout<<"\n count";
				cout<<count;
				int mid,end;
				char rev[count],temp;
				end=count-1;
				mid=count/2;
				for(int i=0;i<mid;i++)
				{
					if(a1[i]!=a1[end])
					{
						flag=0;
						break;
					}
					end--;
				}
				
				if(flag==0)
				{
					cout<<"\n it is not a palindrome\n";
				}
				else
				{
					cout<<"\n it is a palindrome string";
				}
			}
			
};
int main()
{
	char a1[10];
	int b1[5];
	cout<<"\n enter the string \n";
	gets(a1);
	cout<<"enter the array\n";
	for(int i=0;i<5;i++)
	{
		cin>>b1[i];
	}
	palindromeApp p;
	p.checkPalindromeString(a1);
	p.checkPalindromeArray(b1);
	
	
	
}
