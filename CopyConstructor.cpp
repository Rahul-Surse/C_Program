// Q6. The Car class has two constructors: one to set the car's name and another called the copy constructor.
//     The copy constructor is called when we create a new car object (copiedCar) and initialize it using an existing car object (originalCar).
//      The copy constructor copies the car's name from the existing car to the new car, creating a new car that's a copy of the original one.
//      In the main() function, we create an originalCar, display its name, and then create a copiedCar using the copy constructor and display its name.
//    Key points:

//    The copy constructor is automatically called when an object is copied.
//    You can define your own copy constructor to handle deep copying of resources.
#include<iostream>
#include<string.h>
using namespace std;
class car{
    char name[20];

    public:
    car(char name[])
    {
        strcpy(this->name,name);
        cout<<"new car name->"<<name<<"\n";
    }
    car(car &ok)
    {
        //  strcpy(ref->name,name);   intilaization
         strcpy(name,ok.name);
         cout<<"old car name->"<<name<<"\n";
    }

};
int main()
{
    cout<<"Enter thr Car name";
    char name[20];
    cin>>name;
    car obj(name);
    car obj1(obj);//implicit
    //car obj1=obj;// explicit

    return 0;
}
