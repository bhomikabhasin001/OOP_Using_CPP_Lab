// Call by value
/* write a program with class Point(x,y). Create non member function display
(point p) that takes Point object by value and prints its cordinates.*/

#include<iostream>
using namespace std;
class Point{
    public:
    int x,y;
    Point(int a, int b){
    x=a;
    y=b;
   }
};
void display(Point p){
    cout<<"Cordinates are:"<<endl;
    cout<<"x:"<<p.x<<endl;
    cout<<"y:"<<p.y<<endl;
}
int main()
{
    Point P1(5,9),P2(4,6);
    display(P1);
    display(P2);
    return 0;
}