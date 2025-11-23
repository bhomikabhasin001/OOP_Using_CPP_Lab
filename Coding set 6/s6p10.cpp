/*Create an abstract class Shape with pure virtual function area().
Derive classes Rectangle, Circle and Triangle and override the function to 
calculate their areas. Store objects in a base class pointer array
and display the area of each shape.*/


#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    virtual  float area()=0;
    virtual ~Shape() {}
};
class Rectangle:public Shape{
    public:
    int length,breadth;
    Rectangle(int l , int b){
        length=l;
        breadth=b;
    }
    float area() override{
        return length*breadth;
    }
};
class Circle:public Shape{
    public:
    int radius;
    Circle(int r){
        radius=r;
    }
    float area() override{
        return 3.14*radius*radius;
    }
};
class Triangle:public Shape{
    public:
    int base,altitude;
    Triangle(int ba , int a){
        base=ba;
        altitude=a;
    }
    float area() override{
        return 0.5*base*altitude;
    }
};
int main(){
    Shape*arr[3];
    arr[0]=new Rectangle(2,3);
    arr[1]=new Circle(2);
    arr[2]=new Triangle(2,3);
    cout<<"Area of Rectangle:"<<arr[0]->area();
    cout<<"\nArea of Circle:"<<arr[1]->area();
    cout<<"\nArea of Triangle:"<<arr[2]->area();
    for (int i=0;i<3;i++){
        delete arr[i];
    }
    return 0;
}