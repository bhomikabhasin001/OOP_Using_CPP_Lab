// Copy constructor
/* Create a class Car with data members brand and price.
Define a copy constructor to initialise one object from another.
Demonstrate a copy constructor in main().*/

#include<iostream>
#include<string>
using namespace std;
class Car{
    string brand;
    float price;
    public:
    Car(string b, float p){
        brand=b;
        price=p;
    }
    Car( const Car &c){
        brand=c.brand;
        price=c.price;
        cout<<"Copy constructor called:"<<endl;
    }
    void display(){
    cout<<"Brand:"<<brand<<","<<"Price:"<<price<<endl;
    }
};
int main(){
    Car c1("ABC",250000);
    Car c2=c1;
    cout<<"Car 1 details:\n";
    c1.display();
    cout<<"Car 2 details(copy):\n";
    c2.display();
    return 0;
}