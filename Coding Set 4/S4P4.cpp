// Return object by value
/*Write a class Complex(real,imag). Create a non member function add(Complex c1, Complex c2)
that returns a new object by value.*/


#include<iostream>
using namespace std;
class Complex{
    public:
    int real,imaginary;
    Complex(int r, int i){
        real=r;
        imaginary=i;
    }
void display(){
    cout<<"Complex number:"<<endl;
    cout<<"Real:"<<real<<endl;
    cout<<"Imaginary:"<<imaginary<<endl;
}};
int addComplex(Complex c1,Complex c2){
    int r1,i1;
    r1=c1.real+c2.real;
    i1=c1.imaginary+c2.imaginary;
    cout<<"after addition,Real:"<<r1<<endl;
    cout<<"after additon,Imaginary:"<<i1<<endl;
}    
int main(){
    Complex c1(2,4);
    c1.display();
    Complex c2(4,6);
    c2.display();
    addComplex(c1,c2);
}