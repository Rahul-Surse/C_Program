#include<iostream>
#include<string.h>
using namespace std;

class array
{
	int a[5];
	public :
		array(int b[5])
		{
			for(int i=0;i<5;i++)
			{
				a[i]=b[i];
			}
		}
		void getsortarray()
		{
			int temp;
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
	           	for(int i=0;i<5;i++)
	            {
	            	cout<<"\t"<<a[i];
	            }
		}
	  	void getsort1array()
		{
			int temp;
			for(int i=0;i<5;i++)
			 {
			 	for(int j=i+1;j<5;j++)
			 	{
			 		if(a[i]<a[j])
			 		{
			 			temp=a[i];
			 			a[i]=a[j];
			 			a[j]=temp;
			 			
					 }
				 }
			 }
	    	for(int i=0;i<5;i++)
	        {
		       cout<<"\t"<<a[i];
	        }
        }
        void getevenfarray()
        {
        	int c[5],j=0;
        	for(int i=0;i<5;i++)
        	{
        		if (a[i]%2==0)
        		{
        		   c[j]=a[i];
        		   j++;
				}
			}
			for(int i=0;i<5;i++)
        	{
        		if (a[i]%2!=0)
        		{
        		   c[j]=a[i];
        		   j++;
				}
			}
			for(int i=0;i<5;i++)
	        {
		       cout<<"\t"<<c[i];
	        }
        	
		}
		void get
      
    
};

int main()
{
	int b[5],t=0;
	cout<<"\n enter the element of array \n";
	for(int i=0;i<5;i++)
	{
		cin>>b[i];
	}
	cout<<"\n the input array is \n";
	for(int i=0;i<5;i++)
	{
		cout<<"\t"<<b[i];
	}
	
	do{
	
	cout<<"\n case 1: sort array in assending order \n";
	cout<<"\n case 2: sort array in dessending order \n";
	cout<<"\n case 3: store even element fist and odd element next \n";
	cout<<"\n case 4: store only primenumber at that index a \n";
    array a1(b);
    int choice;
      cout<<"\n enter the choice\n";
	  cin>>choice;
    switch(choice)
    {
    	case 1:
    		a1.getsortarray();
    		cout<<"\n do you want to contiue\n";
    		cin>>t;
    		break;
    	case 2:
    		a1.getsort1array();
    		break;
    	case 3:
    		a1.getevenfarray();
            break;
	}
}while(t=1);
}
