// Call by Reference
/* Create a class Rectangle(length,breadth). Write a non-member function scale(Rectangle &r)
that doubles the dimensions of the rectangle. Pass by refernce and show that chnages affect oringinal object.*/

#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length,breadth;
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }
};
void scale(Rectangle &r){
    r.length*=2;
    r.breadth*=2;
    cout<<"doubled length is:"<<r.length<<endl;
    cout<<"doubled breadth is:"<<r.breadth<<endl;
}
int main(){
    Rectangle r1(4,5);
    cout<<"length is:"<<r1.length<<endl;
    cout<<"breadth is:"<<r1.breadth<<endl;
    scale(r1);
    return 0;
}