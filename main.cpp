#include<iostream>
#include<string>
using namespace std;

class IBycicle
{
    public:
    void virtual twistTheWheel()=0;
    void virtual ride()=0;
};

class SimpleBycicle : public IBycicle
{
    void twistTheWheel() override
    {
        cout<<"We are in function twistTheWheel() of class SimpleBycicle"<<endl;
    }
    void ride() override
    {
        cout<<"We are in function ride() of class SimpleBycicle"<<endl;
    }
};

class SportBycicle: public IBycicle
{
    void twistTheWheel() override
    {
        cout<<"We are in function twistTheWheel() of class SportBycicle"<<endl;
    }
    void ride()override
    {
        cout<<"We are in function ride() of class SportBycicle"<<endl;
    }
};

class Human
{
public:
    void rideOn(IBycicle &bycicle)
    {
        cout<<"We are in function rideON of class Human"<<endl;
        bycicle.twistTheWheel();
        bycicle.ride();
    }
};

int main()
{
    Human h;
    SimpleBycicle simple;
    SportBycicle sport;

    h.rideOn(simple);
    h.rideOn(sport);

}
