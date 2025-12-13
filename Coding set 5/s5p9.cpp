/* Complex Number Operations using Array of Objects 
Concepts: Array of objects, operator overloading, aggregation 
Problem: 
Create a Complex class with data members: real and imag. 
• Overload the + and * operators. 
• Create an array of Complex objects. 
• Compute the sum and product of all complex numbers in the array. 
Hint: 
Use loop: 
sum = sum + arr[i]; 
product = product * arr[i]; */

#include<iostream>
using namespace std;
class Complex {
    int real;
    int imag;
    public:
    Complex() {
        real=0;
        imag=0;
    }
    Complex(int r, int i) {
        real=r;
        imag=i;
    }
    void setData() {
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>imag;
    }
    void display() {
        cout<<real;
        if(imag>=0)
            cout<<" + "<<imag<<"i"<<endl;
            else
            {cout<<" - "<<-imag<<"i"<<endl;}
        }
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator*(Complex c) {
        Complex temp;
        temp.real = real * c.real;
        temp.imag = imag * c.imag;
        return temp;
    }
   
};
int main() {
    int n;
    cout<<"Enter number of complex numbers:";
    cin>>n;
    Complex arr[n];
    for(int i=0;i<n;i++) {
        cout<<"\nEnter complex number"<<i+1<<":\n";
        arr[i].setData();
    }
    Complex sum=arr[0];
    for (int i=1;i<n;i++) {
        sum=sum+arr[i];
    }
    Complex product=arr[0];
    for(int i=1;i<n;i++){
        product=product*arr[i];
    }
    cout<<"\nSum of complex numbers: ";
    sum.display();
    cout<<"Product of complex numbers: ";
    product.display();
    return 0;
}
