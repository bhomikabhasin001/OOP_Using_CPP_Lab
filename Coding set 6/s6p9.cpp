// Operator overloading with inheritance
/*Create a class Vector2D with x and y coordinates and overload the + operator.
Create a class Vector3D that adds z coordinate and overloads the + operator as well.
Show how the derived operator reuses base functionality.*/

#include<iostream>
#include<string>
using namespace std;
class Vector2D{
    public:
    float x,y;
    Vector2D(){
        x=0;
        y=0;
    }
    Vector2D(float a,float b){
        x=a;
        y=b;
    }
    Vector2D operator+(const Vector2D& v){
        return Vector2D(x+v.x, y+v.y);
    }
    void display(){
        cout<<"x:"<<x<<"\ny:"<<y;
    }
};
class Vector3D: public Vector2D{
    public:
    float z;
    Vector3D(){
        x=0; y=0; z=0;
    }
     Vector3D(float a,float b,float c):Vector2D(a,b) {
        z=c;
    }
    Vector3D operator+(const Vector3D& v){
        Vector2D base=Vector2D::operator+(v);
        return Vector3D(base.x,base.y,z+v.z);
    }
    void display(){
        cout<<"\nx:"<<x<<"\ny:"<<y<<"\nz:"<<z;
    }
}; 
int main(){
    Vector2D v1(3,5),v2(4,4);
    Vector2D v3=v1+v2;
    cout<<"Vector2D:\n";
    v3.display();
    Vector3D v4(3,5,4),v5(4,3,2);
    Vector3D v6=v4+v5;
    cout<<"\nVector3D:";
    v6.display();
    return 0;
}