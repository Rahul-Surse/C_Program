#include<string.h>
#include<iostream>
using namespace std;
class value
{
    protected :
    	int num;
    public:
	value(int num1)
	{
		num=num1;
	}	
	virtual void checknumber()=0;
};
class prime : public value
{
	
	public:
    prime(int num1) : value(num1)
    {
	}
	void checknumber()
	{
		int flag=0;
		for(int i=2;i<num;i++)
		{
			if(num%i==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			cout<<"\n it is a prime number \n";
		}
		else{
			cout<<"\n it is not a prime number \n";
		}
	
	}
	
};
class perfect : public value
{
	public:
	perfect(int num1) : value(num1)
	{
	}
	void checknumber()
	{
		
		int sum=0;
		for(int i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
			
		}
		if(num==sum)
		{
			cout<<"\n it is a perfect number\n";
		}
		else
		{
			cout<<"\n it is not a perfect number \n";
		}
		
	}
	
	
};
class duck : public value
{
	public:
	duck(int num1) : value(num1)
	{
	}
	void checknumber()
	{
		
		int rem,rem1,count=0,count1=0,num3=num;
		for(int i=0;num3>0;i++)
		{
			rem1=num3%10;
			num3=num3/10;
			count++;
		}
	
		for(int i=0;num>0;i++)
		{
			rem=num%10;
			if(rem==0)
			{
				count1++;
				break;
			}
			num=num/10;
			count1++;
		}
		if(count1!=count)
		{
			cout<<"\n it is a duck number \n";
		}else{
			cout<<"\n it is not a duck number \n";
		}
	}
	
};
class strong : public value
{
	public:
    strong(int num1) : value(num1)
    {
	}
	void checknumber()
	{
		int rem,num2=num,fact,sum=0;
		for(int i=0;num2>0;i++)
		{
			fact=1;
			rem=num2%10;
			for(int i=1;i<=rem;i++)
			{
				fact=fact*i;
			}
			sum=sum+fact;
			num2=num2/10;
		}
		
		if(sum==num)
		{
			cout<<"\n it is a strong number \n";
		}
		else{
			cout<<"\n it is not a strong number \n";
		}
	}
};
class armstrong : public value
{
	public:
	armstrong(int num1) : value(num1)
	{
	}
	void checknumber()
	{
		int count=0,num2=num,rem,mul=1,sum=0;
		for(int i=0;num2>0;i++)
		{
			count++;
			num2=num2/10;
		}
		num2=num;
		for(int j=0;num2>0;j++)
		{
			rem=num2%10;
			mul=1;
			for(int k=1;k<=count;k++)
			{
				mul=mul*rem;
			}
			sum=sum+mul;
			cout<<"\n sum is \n"<<sum;
			num2=num2/10;
			
		}
		;
		if(num==sum)
		{
			cout<<"\n it is a armstrong number \n";
		}
		else{
			cout<<"\n it is not a armstrong \n";
		}
		
	}
	
};

int main()
{
	int num1;
	cout<<"enter the number\n";
	cin>>num1;
	prime p1(num1);
	p1.checknumber();
	
	perfect per(num1);
	per.checknumber();
	
    duck d(num1);
	d.checknumber();
	
	strong s(num1);
	s.checknumber();
	
	armstrong a(num1);
	a.checknumber();
		
	return 0;
}
