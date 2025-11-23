// Function overriding with virtual keyboard
/*Create a base class Animal with a speak() function.
Derive classes Dog and Cat that override this function.
Use a base class pointer to call the functions and observe behavior with and without virtual.*/

#include<iostream>
#include<string>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"I can speak:)"<<endl;
    }
};
class Dog: public Animal{
    public:
    void speak() override {
        Animal::speak();
        cout<<"I am dog:)"<<endl;
    }
};
class Cat: public Animal{
    public:
    void speak() override {
        Animal::speak();
        cout<<"I am cat:)"<<endl;
    }
};

int main(){
    Animal*ptr1;  
    Animal*ptr2;
    Dog D1;
    Cat C1;
    ptr1=&D1; 
    ptr2=&C1;
    ptr1->speak();
    ptr2->speak();
}
