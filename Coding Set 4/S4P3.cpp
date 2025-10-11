// Call by pointer
/*Create a class Circle (radius). Write a non member function increaseRadius(Circle*c)
that increases radius by 5. Pass object by pointer.*/


#include<iostream>
using namespace std;
class Circle{
    public:
    int radius;
    Circle(int r){
        radius=r;
    }
};
void IncreaseRadius(Circle*c){
cout<<"After increment, radius is:"<<c->radius+5<<endl;
}
int main(){
    Circle C1(7);
    cout<<"Radius is:"<<C1.radius<<endl;
    IncreaseRadius(&C1);
    return 0;
}