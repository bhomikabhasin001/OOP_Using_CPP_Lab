// Default and parameterized constructor
/* Create a class Circle with data member radius.
Write a default constructor that sets radius to 1.
write a parameterized constructor that accepts radius from user.
Add a area() to calculate and display area.
Demonstrate both constructors in main(). */

#include<iostream>
const double PI=3.14;
using namespace std;
class Circle{
    float radius;
    public:
    Circle(){
        radius=1;
    }
    Circle(float r){
        radius=r;
    }
    void area(){
        float area= 3.14*radius*radius;
        cout<<"Area of the circle is: "<<area<<endl;
    }
};
int main(){
    Circle C1;
    cout<<"using default constructor: "<<endl;
    C1.area();
    float r;
    cout<<"Enter radius for parameterised constructor: ";
    cin>>r;
    Circle C2(r);
    cout<<"using parameterised constructor:"<<endl;
    C2.area();
    return 0;
}
