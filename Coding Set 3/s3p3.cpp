// Member function outside class
/* Create a class Rectangle with datat members length and width.
Define member function area() outside the class using scope resolution operator.
In main(), create an object and display its area.*/

#include<iostream>
#include<string>
using namespace std;
class Rectangle{
    public:
     float length;
     float width;
     float area();
     
}; 
float Rectangle :: area(){
    return length*width;
}
int main(){
    Rectangle r1;
    r1.length=10.34;
    r1.width=23.4;
    cout<<"area of the rectangle: "<<r1.area()<<endl;
    return 0;
}
