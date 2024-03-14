#include<iostream>
using namespace std;

class interest
{
	protected:
		int pa,ir,du;
	public:
	void setPRD(int pamt,int irate,int dur)
	{
		pa=pamt;
		ir=irate;
		du=dur;
		
	}
};
class calculateintrest : public interest
{
	protected :
		int I;
	public:
	void callintrest()
	{
	    I=(pa*ir*du)/100;
	    cout<<I;
	}
};
int main()
{
	int pamt,irate,dur;
	cout<<"\n eneter the prrincipal amount, interest rate, duration \n";
	cin>>pamt>>irate>>dur;
	calculateintrest c1;
	c1.setPRD(pamt,irate,dur);
	c1.callintrest();
	
	
}
