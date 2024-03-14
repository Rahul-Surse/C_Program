//Q. WAP to create function name as 
//void arrRev(int a[]): this function can accept integer type of array and reverse it 
//void arrRev(char[]): this function can accept character type of array and reverse it.
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;



void arrRev(int a[])
{
	cout<<"\n Enter the aaaray \n";
	for(int i=0;i<5;i++)
	{
      cin>>a[i];
    }
}

void arrRev(char b[])
{
	int len,temp,mid,end;
	gets(b);
	len=strlen(b);
	end=len-1;
	mid=len/2;
	for(int i=0;i<mid;i++)
	{
	    temp=b[i];
	    b[i]=b[end];
	    b[end]=temp;
	    end--;
	}	
	cout<<'\n'<<b;
}


int main()
{
	int a[5];
	char b[10];
	arrRev(b);
    arrRev(a);
}
