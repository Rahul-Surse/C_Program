#include<iostream>
#include<string.h>
using namespace std;
class car
{
	char car_1[20];
	chae old_name[20];
	
	public:
		car()
		{
			printf("Enter the oled name");
			cin>>old_name;
			
		}
		car(car &c1)
		{
		cout<<"old name of car is"<<old_name;
		cout<<"new name of car is"<<c1.;
			
		}
};
int main()
{
	char car2[20];
	cout<<"\n Enter the name of car \n";
	cin>>car2;
	car c1();
	car c2(c1);
}
