// Hierarchical Inheritance
/*Create a base class Shape with a function area().
Derive two classes: Rectangle and Circle.
Override the area() function to compute respective areas.*/

#include<iostream>
#include<string>
using namespace std;
class Shape{
    public:
    int area(){
        return 0;
    }
};
class Rectangle: public Shape{
    public:
    int length;
    int breadth;
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        cout<<"\n Area is:"<<length*breadth;
        return length*breadth;
    }
};
class Circle: public Shape{
    public:
    int radius;
    Circle(int r){
        radius=r;
    }
    int area(){
        cout<<"\n Area is:"<<3.14*radius*radius;
        return 3.14*radius*radius ;
    }
};
int main(){
    Rectangle r(2,3);
    Circle c(4);
    r.area();
    c.area();
    return 0;
}