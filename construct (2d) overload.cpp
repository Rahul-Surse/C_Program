#include<iostream>
#include<string.h>
using namespace std;

class ArrayOperationApp
{
	public:
		ArrayOperationApp(int a[])
		{
			int temp=0;
			for(int i=0;i<5;i++)
			 {
			 	for(int j=i+1;j<5;j++)
			 	{
			 		if(a[i]>a[j])
			 		{
			 			temp=a[i];
			 			a[i]=a[j];
			 			a[j]=temp;
			 			
					 }
				 }
			 }
			 cout<<"\n Array in assending order \n";
			 for(int i=0;i<5;i++)
			{
				cout<<a[i]<<"\t";
			}
		}
		ArrayOperationApp(int b[2][2],int ser)
		{
			int flag=0;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					if(b[i][j]==ser)
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"\n find \n";
				
			}else{
				cout<<"\n not find \n";
			}
		}
	
};
int main()
{
	int ser;
	int a[5];
	int b[2][2];
	cout<<"\n Enter the element of array A \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	ArrayOperationApp A1(a);
	cout<<"\n enter the element of array B \n";
	for(int i=0;i<2;i++)
	{
	   for(int j=0;j<2;j++)
	   {
	   	 cin>>b[i][j];
	   }
	   cout<<"\n";
	}
	cout<<"\n enter the searching digit";
	cin>>ser;
	ArrayOperationApp A2(b,ser);
}
