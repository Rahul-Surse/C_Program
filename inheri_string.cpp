#include<string.h>
#include<iostream>
using namespace std;

class StringOperation
{
	protected:
		int len1;
		char str1[20],*ptr;
		char  temp[10];
	public:
	void setArray(char str [],int len)
	{
		strcpy(str1,str);
		len1=len;
		ptr=str1;
	}
};
class SortString : public StringOperation
{
	public:
    void sortacsString()
	{
		for(int i=0;i<len1;i++)
		{
			for(int j=i+1;j<len1;j++)
			{
			
			     if((str1[i]) > (str1[j]))
		    	{
			    	temp[i]=str1[i];
				    str1[i]=str1[j];
				    str1[j]=temp[i];
		     	}
	     	}
	    }
	    cout<<"the sorted assending string \n";
	    cout<<str1<<"\n";

		
	}	
};
class ReverseString : public StringOperation
{
	protected:
		int end,mid;
		char temp1[20];
   public:
   void revString()
   {
   	   end=len1-1;
   	   mid=len1/2;
   	   for(int i=0;i<mid;i++)
   	   {
   	   	   temp[i]=str1[i];
   	   	   str1[i]=str1[end];
   	   	   str1[end]=temp[i];
   	   	   end--;
   	  }
      cout<<"the reverse string is \n";
	  cout<<str1<<"\n";   	
   }	
};
class convertString : public StringOperation
{

	protected:
	public:
	void convertupString()
	{
		for(int i=0;i<len1;i++)
		{
			if((ptr[i]>='a') && (ptr[i]<='z'))
			{
				ptr[i]=ptr[i]-32;
			}
		}
		cout<<"the string after uppconverting is\n";
		cout<<str1<<"\n";
		
	}
	void convertlowString()
	{
			for(int i=0;i<len1;i++)
		{
			if((ptr[i]>='A') && (ptr[i]<='Z'))
			{
				ptr[i]=ptr[i]+32;
			}
		}
		cout<<"the string after lowconverting is\n";
		cout<<str1<<"\n";
}
};
class AdditionDigits : public StringOperation
{
	protected:
		int sum,I;
    public:
	void sumofdigits()
	{
		sum=0;
		
		for(int i=0;i<len1;i++)
        {
        	if ((str1[i]>='0') && (str1[i]<='9'))
        	{
        		I=str1[i]-l48;
        		sum=sum+I;
			}
		}
		cout<<"the sum of digits \n";
		cout<<"\n"<<sum;
	}
};

int main()
{
	int len;
	char str[20];
	cout<<"enter the string \n";
	gets(str);
	len=strlen(str);
	cout<<len;
	SortString s;
	s.setArray(str,len);
	s.sortacsString();
	
	ReverseString r;
	r.setArray(str,len);
	r.revString();
	
	convertString c;
	c.setArray(str,len);
	c.convertupString();
	c.convertlowString();
	
	AdditionDigits a;
	a.setArray(str,len);
	a.sumofdigits();	
	return 0;
}
