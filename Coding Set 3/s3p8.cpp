// Object as Function Argument
/* Create a class complex with two data members real and imag.
Define a function add(complex c) that adds the current object with object c 
and returns the result.
in main (), create two complex numbers and add them.*/

#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(){
        real=0; 
        imag=0;
    }
    Complex(int r, int i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<"Real part:"<<real<<endl;
        cout<<"Imaginary part:"<<imag<<endl;
    }
    Complex addcomplex(Complex C){
        Complex temp;
        temp.real=real+C.real;
        temp.imag=imag+C.imag;
        return temp;
    }
};
int main(){
    Complex C1(2,6);
    Complex C2(5,4);
    Complex C3= C1.addcomplex(C2);
    cout<<"First complex number:\n";
    C1.display();
    cout<<"Second complex number:\n";
    C2.display();
    cout<<"Sum of  complex numbers:\n";
    C3.display();
    return 0;
}