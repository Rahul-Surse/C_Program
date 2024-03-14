#include<iostream>
#include<string.h>
using namespace std;
class ArrayOpe
{
	int rem;
	
	public :
		ArrayOpe(a[6])
		{
		   int a[6]={5732,8659,2534,9625,7354,1325};
	       int len=sizeof(a)/sizeof(a[0]);
		}
		int sortassending()
		{
		   int b[4],len,sum;
		   int temp,temp2,j;
		   int a[6];
           for(int i=0;i<len;i++)
		   {
		   	temp=a[i];
		   	while(temp!=0)
		   	{
		   		j=0;
		   		b[j]=temp%10;
		   		j++;
		   		temp=temp/10;
			}
			for(int k=0;k<4;k++)
			{
				for(int l=k+1;l<4;l++)
				{
					if (b[i]>b[l])
					{
						temp2=b[i];
						b[i]=b[l];
						b[l]=temp2;
						
					}
				}
			}
              for(int k=0;k<4;k++)	
			  {
			  	sum=sum*10+b[k];
			  }	
			  a[i]=sum;
			  sum=0;   	
		   }		  
		}
		int sortdessending()
		{
			
		}
		int sumofdigits()
		{
			
		}
	
	    int sortevenodd()
	    {
	    	
		}
		int storeprime()
		{
			
		}
	
};

int main()
{
	int a[]={5732,8659,2534,9625,7354,1325};
	ArrayOpe A(a[6]);
	do {
		int choice;
		cout<<"case 1: sort number in assending order\n";
		cout<<"case 2: sort number in dessending order\n";
		cout<<"case 3: sum of digits \n";
		cout<<"case 4: sort evenodd\n";
		cout<<"case 5: store prime\n";
		cout<<"\n Enter the choice \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int n=0
				A.sortassending();
				cout<<"\n due want to continue 1 for continue\n";
				cin>>n;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			
			
			
			
			
			
			
			
			
			
			
		}
		
		
	}while(n==1);
	
	
}
