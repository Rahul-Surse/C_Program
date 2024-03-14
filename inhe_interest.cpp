#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;


class interest
{
	protected:
		int PA,IR,DUR;
	public:
	void setPRD(int pamt,int irate,int dur)
	{
		PA=pamt;
		IR=irate;
		DUR=dur;
	}
};

class calculateinterest:public interest
{
	protected:
		int I;
	public:
	void callinterest()
	{
		I=(PA*IR*DUR)/100;
		cout<<I;
		
	}
};

int main()
{
	int pamt,irate,dur;
	cout<<"\n enter the principal amount,intrest rate,interest duration \n";
	cin>>pamt>>irate>>dur;
	calculateinterest obj;
	obj.setPRD(pamt,irate,dur);
    obj.callinterest();
    

}
