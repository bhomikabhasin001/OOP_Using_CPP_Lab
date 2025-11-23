// Constructor and Destructor
/*Create two classes Base and Derived having constructors and destructors
that display messages when called.
Create an object of Derived and observe the order of constructors/destructors
called.*/


#include<iostream>
#include<string>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"\nFirst(Base) constructor called:)";
    }
    ~Base(){
        cout<<"\nFirst(Base) destructor called:)";
    }
};
class Derived: public Base{
    public:
    Derived(){
        cout<<"\nSecond(Derived) constructor called:)";
    }
    ~Derived(){
        cout<<"\nSecond(Derived) destructor called:)";
    }
};
int main(){
    Derived D1;
    return 0;
}