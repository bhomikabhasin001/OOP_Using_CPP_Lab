// Call by value (Member function)
/*Create a class Box(length,width,height). Add a member function compare(Box b)
that compares the calling object with b(passed by value) and prints which is larger in volume.*/


#include<iostream>
using namespace std;
class Box{
    double length,breadth,width;
    public:
    Box(){
        length=0;
        breadth=0;
        width=0;
    }
    Box(double l, double b,double w){
        length=l;
        breadth=b;
        width=w;
    }
    double getVolume(){
        return length*breadth*width;
    }
    void compare(Box b) {
        double volume1 = this->getVolume();
        double volume2 = b.getVolume();  
        cout << "Details for Box 1 (calling object):" << endl;
        this->display(); 
        cout << "Details for Box 2 (passed object):" << endl;
        b.display();  

        if (volume1 > volume2) {
            cout << "Box 1 (calling object) is larger in volume." << endl;
        } else if (volume2 > volume1) {
            cout << "Box 2 (passed object) is larger in volume." << endl;
        } else {
            cout << "Both boxes have the same volume." << endl;
        }
    }
  
    void display(){
        cout << "Dimensions of Box: Length=" << length << ", breadth=" << breadth << ", width=" << width << endl;
    }
};
int main(){
    Box b1(12.4,32.4,11.2);
    Box b2(23.4,56.3,11.2);
    cout << "\nComparing Box b1 and Box b2:" << endl;
    b1.compare(b2);
}