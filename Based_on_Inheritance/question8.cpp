// WAP to display who is the owner of bike in which parent and child has a bike of same brand using
// using function overriding and virtual class?

#include <iostream>
#include <string>
using namespace std;

// Base class for Bike
class Bike
{
protected:
    string brand;
    string owner;

public:
    Bike(string b, string o)
    {
        brand = b;
        owner = o;
    }

    virtual void displayOwner()
    {
        cout << "Owner of " << brand << " bike: " << owner << endl;
    }
};

// Derived class for Parent
class Parent : public Bike
{
public:
    Parent(string b, string o) : Bike(b, o) {}

    void displayOwner() override
    {
        cout << "Parent owns " << brand << " bike." << endl;
    }
};

// Derived class for Child
class Child : public Bike
{
public:
    Child(string b, string o) : Bike(b, o) {}

    void displayOwner() override
    {
        cout << "Child owns " << brand << " bike." << endl;
    }
};

int main()
{

    Parent parent("Honda", "Minakshi");
    Child child("Honda", "Dibya");

    parent.displayOwner();
    child.displayOwner();

    return 0;
}
