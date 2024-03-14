//1) Write a CPP program to create a class called "Bank" with a
     // collection of accounts and methods to add and remove accounts,
// and to deposit and withdraw money. 
// Also define a class called "Account" to maintain account details of a particular customer(add 5 account details).
// case 1- Add Account
// case 2- Remove Account
// case 3- Deposit Ammount
// case 4- withdraw Ammount
// case 5- Check Balance

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class bank
{
	private:
		
		public:
			void setdata()
			{
				
				
			}
			int deposit()
			{
				
			}
			int withdraw()
			{
				
			}
			void display()
			{
				
			}
	
};
int main()
{
	
	int opt;
	do{
	
   	    cout<<"\n case1: add account \n case2: remove account \n case3:  Deposit Ammount\n case4: withdraw Ammount\n case5: Check Balance\n enter 0 for exit";
	    cin>>opt;
	    switch(opt)
	    {
	    	case 1:
	    		cout<<"\n added \n";
	    		cout<<"enter the "
	    		break;
	    	case 2:
	    		cout<<"\n removed \n";
	    		break;
			case 3:
	    		cout<<"\n dep\n";
	    		break;
			case 4:
	    		cout<<"\n with \n";
	    		break;
			case 5:
	    		cout<<"\n check \n";
	    		break;	
			default:
			cout<<"\n invalide input";					
		}
	
	}while(opt!=0);
	
}
